////////////////////////////////////////////////////////////////////////
// feed_atom.cpp
// generated with ecppc
//

#include <tnt/ecpp.h>
#include <tnt/convert.h>
#include <tnt/httprequest.h>
#include <tnt/httpreply.h>
#include <tnt/httpheader.h>
#include <tnt/http.h>
#include <tnt/data.h>
#include <tnt/componentfactory.h>
#include <cxxtools/log.h>
#include <stdexcept>

log_define("component.feed_atom")

// <%pre>
#line 28 "feed_atom.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/page.h>
  #include <vagra/utils.h>
  #include <vagra/config.h>
  #include <vagra/cachedsearch.h>

// </%pre>

namespace
{
class _component_ : public tnt::EcppComponent
{
    _component_& main()  { return *this; }

  protected:
    ~_component_();

  public:
    _component_(const tnt::Compident& ci, const tnt::Urlmapper& um, tnt::Comploader& cl);

    unsigned operator() (tnt::HttpRequest& request, tnt::HttpReply& reply, tnt::QueryParams& qparam);
};

static tnt::ComponentFactoryImpl<_component_> Factory("feed_atom");

static const char* rawData = "p\000\000\000\226\000\000\000\314\000\000\000\357\000\000\000\006\001\000\000-\001\000"
  "\000=\001\000\000d\001\000\000z\001\000\000\206\001\000\000\227\001\000\000\255\001\000\000\351\001\000\000\361\001"
  "\000\000\020\002\000\000\026\002\000\000\027\002\000\000\035\002\000\000\036\002\000\000F\002\000\000\200\002\000\000"
  "\274\002\000\000\331\002\000\000\363\002\000\000\367\002\000\000\006\003\000\000\036\003\000\000&\003\000\000<\?xml v"
  "ersion=\"1.0\" encoding=\"utf-8\"\?>\n<feed xmlns=\"http://www.w3.org/2005/Atom\">\n  <id>tag:,2010-05-03:articles</i"
  "d>\n  <title></title>\n  <link href=\"feed/atom\" rel=\"self\" />\n  <link href=\"\" />\n  <updated></updated>\n  <ic"
  "on>/favicon.ico</icon>\n  <entry>\n    <id>tag:,2010-05-03:</id>\n    <title></title>\n    <updated></updated>\n    <"
  "link rel=\"alternate\" type=\"text/html\" href=\"article/\" />\n    <summary type=\"text\">\n      \n      \n    </su"
  "mmary>\n    <author>\n      <name></name>\n    </author>\n    <content type=\"xhtml\" xml:base=\"\">\n      <div xmln"
  "s=\"http://www.w3.org/1999/xhtml\">\n        \n      </div>\n    </content>\n          <category term=\"\"/>\n    <pu"
  "blished></published>\n  </entry>\n</feed>\n";

// <%shared>
// </%shared>

// <%config>
// </%config>

#define SET_LANG(lang) \
     do \
     { \
       request.setLang(lang); \
       reply.setLocale(request.getLocale()); \
     } while (false)

_component_::_component_(const tnt::Compident& ci, const tnt::Urlmapper& um, tnt::Comploader& cl)
  : EcppComponent(ci, um, cl)
{
  // <%init>
  // </%init>
}

_component_::~_component_()
{
  // <%cleanup>
  // </%cleanup>
}

unsigned _component_::operator() (tnt::HttpRequest& request, tnt::HttpReply& reply, tnt::QueryParams& qparam)
{
  log_trace("feed_atom " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%cpp>
#line 37 "feed_atom.ecpp"

  static std::string title(vagra::getConfig("vablo", "site_name"));
  static std::string identifier(title);
  static std::string main_url(vagra::getConfig("vablo", "site_url"));

#line 42 "feed_atom.ecpp"

try {
  tnt::Savepoint sp(reply);

  vagra::CachedSearch<vagra::Article> search;
  search.setOrderAsc(false);
  search.setContext(request.getArg("context","default"));


  // <%include> inc/atom_header.ecpp
#line 28 "inc/atom_header.ecpp"
 reply.setContentType("application/atom+xml");

  reply.out() << data[0]; // <\?xml version="1.0" encoding="utf-8"\?>
  reply.out() << data[1]; // \n<feed xmlns="http://www.w3.org/2005/Atom">\n  <id>tag:
#line 31 "inc/atom_header.ecpp"
  reply.sout() << ( identifier );
  reply.out() << data[2]; // ,2010-05-03:articles</id>\n  <title>
#line 32 "inc/atom_header.ecpp"
  reply.sout() << ( title );
  reply.out() << data[3]; // </title>\n  <link href="
#line 33 "inc/atom_header.ecpp"
  reply.sout() << ( main_url );
  reply.out() << data[4]; // feed/atom" rel="self" />\n  <link href="
#line 34 "inc/atom_header.ecpp"
  reply.sout() << ( main_url );
  reply.out() << data[5]; // " />\n  <updated>
#line 35 "inc/atom_header.ecpp"
  reply.sout() << ( vagra::date2cdstr(search.getMTime()) );
  reply.out() << data[6]; // </updated>\n  <icon>/favicon.ico</icon>\n
  // </%include>
#line 54 "feed_atom.ecpp"


  vagra::Page pg(search.getResults(), 1);

  for (vagra::Page::const_iterator it = pg.begin();
	it != pg.end(); it++)
  {
     try {
       tnt::Savepoint asp(reply);
       vagra::CachedArticle article(*it);

  // <%include> inc/atom_article.ecpp
  reply.out() << data[7]; //   <entry>\n    <id>tag:
#line 29 "inc/atom_article.ecpp"
  reply.sout() << ( identifier );
  reply.out() << data[8]; // ,2010-05-03:
#line 29 "inc/atom_article.ecpp"
  reply.sout() << ( article->getId() );
  reply.out() << data[9]; // </id>\n    <title>
#line 30 "inc/atom_article.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[10]; // </title>\n    <updated>
#line 31 "inc/atom_article.ecpp"
  reply.sout() << ( vagra::date2cdstr(article->getMTime()) );
  reply.out() << data[11]; // </updated>\n    <link rel="alternate" type="text/html" href="
#line 32 "inc/atom_article.ecpp"
  reply.sout() << ( main_url );
  reply.out() << data[12]; // article/
#line 32 "inc/atom_article.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[13]; // " />\n    <summary type="text">\n
#line 34 "inc/atom_article.ecpp"
   if(!article->getAbstract().empty()) {

  reply.out() << data[14]; //       
#line 35 "inc/atom_article.ecpp"
  reply.sout() << ( article->getAbstract() );
  reply.out() << data[15]; // \n
#line 36 "inc/atom_article.ecpp"
   } else if (!article->getHead().empty()) {

  reply.out() << data[16]; //       
#line 37 "inc/atom_article.ecpp"
  reply.sout() << ( article->getHead() );
  reply.out() << data[17]; // \n
#line 38 "inc/atom_article.ecpp"
   }

  reply.out() << data[18]; //     </summary>\n    <author>\n      <name>
#line 41 "inc/atom_article.ecpp"
  reply.sout() << ( article->getAuthor() );
  reply.out() << data[19]; // </name>\n    </author>\n    <content type="xhtml" xml:base="
#line 43 "inc/atom_article.ecpp"
  reply.sout() << ( main_url );
  reply.out() << data[20]; // ">\n      <div xmlns="http://www.w3.org/1999/xhtml">\n        
#line 45 "inc/atom_article.ecpp"
  reply.out() << ( article->getText() );
  reply.out() << data[21]; // \n      </div>\n    </content>\n
#line 48 "inc/atom_article.ecpp"
       std::vector<std::string> art_tags = article->getTags();

#line 49 "inc/atom_article.ecpp"
       for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 50 "inc/atom_article.ecpp"
           tit != art_tags.end(); tit++) {

  reply.out() << data[22]; //           <category term="
#line 51 "inc/atom_article.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[23]; // "/>\n
#line 52 "inc/atom_article.ecpp"
       }

  reply.out() << data[24]; //     <published>
#line 53 "inc/atom_article.ecpp"
  reply.sout() << ( vagra::date2cdstr(article->getCTime()) );
  reply.out() << data[25]; // </published>\n  </entry>\n
  // </%include>
#line 68 "feed_atom.ecpp"

       asp.commit();
     } catch(const std::exception& er_art) {
       log_error(er_art.what());
    }
  }

  // <%include> inc/atom_footer.ecpp
  reply.out() << data[26]; // </feed>\n
  // </%include>
#line 78 "feed_atom.ecpp"

  sp.commit();
}
catch(const std::exception& er_feed) {
	log_error(er_feed.what());
}

  // <%/cpp>
  return HTTP_OK;
}

} // namespace
