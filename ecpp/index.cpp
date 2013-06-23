////////////////////////////////////////////////////////////////////////
// index.cpp
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

log_define("component.index")

// <%pre>
#line 28 "index.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/exception.h>
  #include <vagra//page.h>
  #include <vagra/utils.h>
  #include <vagra/config.h>
  #include <vagra/cachedsearch.h>

#line 28 "inc/header.ecpp"

#include <vagra/article/tagsum.h>
#include <vagra/config.h>

#line 28 "inc/footer.ecpp"

#include <vagra/config.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("index");

static const char* rawData = "\320\000\000\000\326\001\000\000\330\002\000\000\355\002\000\000\001\003\000\000X\003\000"
  "\000u\003\000\000w\003\000\000x\003\000\000\200\003\000\000\274\003\000\000\346\003\000\000\350\003\000\000\362\003"
  "\000\000\027\004\000\000\036\004\000\000%\004\000\000&\004\000\000,\004\000\000-\004\000\000E\004\000\000G\004\000"
  "\000L\004\000\000q\004\000\000|\004\000\000\212\004\000\000\225\004\000\000\236\004\000\000\261\004\000\000\273\004"
  "\000\000\314\004\000\000\357\004\000\000\370\004\000\000\002\005\000\000\003\005\000\000\026\005\000\000\030\005\000"
  "\000\035\005\000\000+\005\000\000-\005\000\0002\005\000\000;\005\000\000C\005\000\000D\005\000\000U\005\000\000W\005"
  "\000\000p\005\000\000{\005\000\000\204\005\000\000\257\005\000\0001\006\000\000L\006\000\000<!DOCTYPE html PUBLIC \"-"
  "//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3"
  ".org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-"
  "8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <link "
  "href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>\n\n  "
  "<div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"tags\">"
  "\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n          <a href=\"/ca"
  "tegories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div class=\"article\">\n  "
  "  <h3><a href=\"/\"></a></h3>\n    <div class=\"article_info\">\n      \n      \n      \n      \n\t  <a href=\"/categ"
  "ories/\"></a>\n      | There are <a href=\"/comments/#comments\"> Comments</a>\n    </div>\n  </div>\n  <div id=\"pag"
  "er\">\n        1\n        <a href=\"\">Previous</a> \302\253\n        <a href=\"1\">1</a>\n          \n          <a h"
  "ref=\"\"></a>\n\t    <a href=\"\"></a>\n\t    \342\200\246\n        \n        <a href=\"\"></a>\n        \302\273 <a "
  "href=\"\">Next</a>\n  </div>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www."
  "tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n"
  "</html>\n";

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
  log_trace("index " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%cpp>
#line 38 "index.ecpp"

  std::string title(vagra::getConfig("vablo", "site_name"));
  std::string page_url("/page/");

  // <%include> inc/header.ecpp
  reply.out() << data[0]; // <!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">\n<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">\n  <head>\n    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />\n    <title>
#line 36 "inc/header.ecpp"
  reply.sout() << ( title );
  reply.out() << data[1]; // </title>\n    <link href="/static/vablo.css" rel="stylesheet" type="text/css" />\n    <link href="/feed/atom" type="application/atom+xml" rel="alternate" title="Atom feed" />\n  </head>\n  <body>\n\n  <div id="background">\n    <div id="head">\n\t    <h1><a href="/">
#line 44 "inc/header.ecpp"
  reply.sout() << ( vagra::getConfig("vablo", "site_name") );
  reply.out() << data[2]; // </a></h1>\n    </div>\n
  // <%include> inc/custom_header.ecpp
  // </%include>
  reply.out() << data[3]; //     <div id="tags">\n
  // <%include> inc/custom_tags.ecpp
  // </%include>
  reply.out() << data[4]; //       <dl class="tags">\n        <dt>\n          categories\n        </dt>\n        <dd>\n  
#line 58 "inc/header.ecpp"

    try {
      tnt::Savepoint sp(reply);
      vagra::ArticleTags tagsum;
      for (vagra::ArticleTags::const_iterator it = tagsum.begin(); it != tagsum.end(); it++)
      {
  
  reply.out() << data[5]; //         <a href="/categories/
#line 65 "inc/header.ecpp"
  reply.sout() << ( it->first );
  reply.out() << data[6]; // ">
#line 65 "inc/header.ecpp"
  reply.sout() << ( it->first );
  reply.out() << data[7]; // (
#line 65 "inc/header.ecpp"
  reply.sout() << ( it->second );
  reply.out() << data[8]; // )</a>\n  
#line 66 "inc/header.ecpp"

      } 
      sp.commit();
    }
    catch(const std::exception& err_tag) {
    	log_error(err_tag.what());
    }
  
  reply.out() << data[9]; //         </dd>\n      </dl>\n    </div>\n    <div id="content">\n
  // </%include>
#line 45 "index.ecpp"

try {
  tnt::Savepoint sp(reply);

  vagra::CachedSearch<vagra::Article> search;
  search.setOrderAsc(false);
  search.setContext(request.getArg("context","default"));

  vagra::Page pg(search.getResults(), vagra::str2Pagenum(request.getArg("pagenum","1")));

  for (vagra::Page::const_iterator it = pg.begin();
	it != pg.end(); it++)
  {
    try {
      tnt::Savepoint asp(reply);
      vagra::CachedArticle article(*it);

  // <%include> inc/article_pre.ecpp
  reply.out() << data[10]; //   <div class="article">\n    <h3><a href="/
#line 29 "inc/article_pre.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 29 "inc/article_pre.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 29 "inc/article_pre.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[11]; // ">
#line 29 "inc/article_pre.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[12]; // </a></h3>\n
#line 30 "inc/article_pre.ecpp"

    if(article->getAbstract().empty())
	reply.out() << article->getText();
    else
	reply.out() << article->getAbstract();

  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[13]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[14]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[15]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[16]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[17]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[18]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[19]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[20]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[21]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[22]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[23]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[24]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[25]; //     </div>\n
  // </%include>
  reply.out() << data[26]; //   </div>\n
  // </%include>
#line 65 "index.ecpp"

      asp.commit();
    } catch(const std::exception& er_art) {
      log_error(er_art.what());
    }
  }

  // <%include> inc/pager.ecpp
#line 28 "inc/pager.ecpp"
   if(pg.getAmount() > 1) {

  reply.out() << data[27]; //   <div id="pager">\n
#line 30 "inc/pager.ecpp"
     if(pg.getCurrent() == 1) {

  reply.out() << data[28]; //         1\n
#line 32 "inc/pager.ecpp"
     } else {

  reply.out() << data[29]; //         <a href="
#line 33 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 33 "inc/pager.ecpp"
  reply.sout() << ( pg.getPrevious() );
  reply.out() << data[30]; // ">Previous</a> \302\253\n        <a href="
#line 34 "inc/pager.ecpp"
  reply.sout() << ( page_url );
  reply.out() << data[31]; // 1">1</a>\n
#line 35 "inc/pager.ecpp"
     }

#line 36 "inc/pager.ecpp"
     for(int page = 2; page < pg.getAmount(); page++) {

#line 37 "inc/pager.ecpp"
       if(page == pg.getCurrent()) {

  reply.out() << data[32]; //           
#line 38 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[33]; // \n
#line 39 "inc/pager.ecpp"
       } else if ((page < pg.getCurrent() && page > pg.getCurrent() -6 ) ||

#line 40 "inc/pager.ecpp"
		   (page > pg.getCurrent() && page < pg.getCurrent() +6 )) {

  reply.out() << data[34]; //           <a href="
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[35]; // ">
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[36]; // </a>\n
#line 42 "inc/pager.ecpp"
       } else if (page == pg.getCurrent() -6 || page == pg.getCurrent() + 6) {

#line 43 "inc/pager.ecpp"
	  if(page == 2 || page == pg.getAmount() -1) {

  reply.out() << data[37]; // \t    <a href="
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[38]; // ">
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[39]; // </a>\n
#line 45 "inc/pager.ecpp"
	  } else {

  reply.out() << data[40]; // \t    \342\200\246\n
#line 47 "inc/pager.ecpp"
	  }

#line 48 "inc/pager.ecpp"
       }

#line 49 "inc/pager.ecpp"
     }

#line 50 "inc/pager.ecpp"
     if(pg.getCurrent() == pg.getAmount()) {

  reply.out() << data[41]; //         
#line 51 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[42]; // \n
#line 52 "inc/pager.ecpp"
     } else {

  reply.out() << data[43]; //         <a href="
#line 53 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 53 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[44]; // ">
#line 53 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[45]; // </a>\n        \302\273 <a href="
#line 54 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 54 "inc/pager.ecpp"
  reply.sout() << ( pg.getNext() );
  reply.out() << data[46]; // ">Next</a>\n
#line 55 "inc/pager.ecpp"
     }

  reply.out() << data[47]; //   </div>\n
#line 57 "inc/pager.ecpp"
   }

  // </%include>
#line 75 "index.ecpp"

  sp.commit();
}
catch(const vagra::Exception& er_art) {
  reply.out() << er_art.what() << std::endl;
}
catch(const std::exception& er_art) {
  log_error(er_art.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[48]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[49]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[50]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
