////////////////////////////////////////////////////////////////////////
// article.cpp
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

log_define("component.article")

// <%pre>
#line 28 "article.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/comment/cachedcomment.h>
  #include <vagra/exception.h>
  #include <vagra/config.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("article");

static const char* rawData = "\324\000\000\000\332\001\000\000\334\002\000\000\361\002\000\000\005\003\000\000\134\003"
  "\000\000y\003\000\000{\003\000\000|\003\000\000\204\003\000\000\300\003\000\000\330\003\000\000\335\003\000\000\343"
  "\003\000\000\365\003\000\000\367\003\000\000\001\004\000\000\027\004\000\000\035\004\000\000!\004\000\000\"\004\000"
  "\000G\004\000\000N\004\000\000U\004\000\000V\004\000\000\134\004\000\000]\004\000\000u\004\000\000w\004\000\000|\004"
  "\000\000\241\004\000\000\254\004\000\000\272\004\000\000\305\004\000\000\316\004\000\000\360\004\000\000=\005\000\000"
  "B\005\000\000R\005\000\000T\005\000\000Y\005\000\000g\005\000\000h\005\000\000\271\005\000\000\343\005\000\000\371"
  "\005\000\000\016\006\000\000-\006\000\000B\006\000\000_\006\000\000\212\006\000\000\014\007\000\000'\007\000\000<!DOC"
  "TYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html x"
  "mlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"tex"
  "t/html; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/"
  "css\" />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </h"
  "ead>\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n  "
  "  <div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n    "
  "      <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div cla"
  "ss=\"article\">\n\t<h4></h4>\n    <h2><a href=\"/\"></a></h2>\n\t<p class=\"abstract\">  </p>\n    \n    <div class="
  "\"article_info\">\n      \n      \n      \n      \n\t  <a href=\"/categories/\"></a>\n      | There are <a href=\"/co"
  "mments/#comments\"> Comments</a>\n    </div>\n  </div>\n  <h4 id=\"comments\">Comments</h4>\n        <div class=\"com"
  "ment\">\n          <p class=\"comment_info\">\n             by \n\t      <a href=\"\"></a>\n              \n         "
  " </p>\n          <p class=\"comment_reply\">\n            <a href=\"/comment/\">Reply</a>\n          </p>\n          "
  "<pre></pre>\n        </div>\n  <a href=\"/comments/#comments\">All comments</a> | \n  <a href=\"/comments/#comment\">"
  " Write comment</a>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www.tntnet.org"
  "/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("article " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%cpp>
#line 36 "article.ecpp"

  std::string title(request.getPathInfo());

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
#line 42 "article.ecpp"

try {
  tnt::Savepoint sp(reply);
  vagra::CachedArticle article(title);

  // <%include> inc/article_full.ecpp
  reply.out() << data[10]; //   <div class="article">\n
#line 29 "inc/article_full.ecpp"
   if(!article->getHead().empty()) {

  reply.out() << data[11]; // \t<h4>
#line 30 "inc/article_full.ecpp"
  reply.sout() << ( article->getHead() );
  reply.out() << data[12]; // </h4>\n
#line 31 "inc/article_full.ecpp"
   }

  reply.out() << data[13]; //     <h2><a href="/
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 32 "inc/article_full.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[14]; // ">
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[15]; // </a></h2>\n
#line 33 "inc/article_full.ecpp"
    if(!article->getAbstract().empty()) {

  reply.out() << data[16]; // \t<p class="abstract"> 
#line 34 "inc/article_full.ecpp"
  reply.sout() << ( article->getAbstract() );
  reply.out() << data[17]; //  </p>\n
#line 35 "inc/article_full.ecpp"
    }

  reply.out() << data[18]; //     
#line 36 "inc/article_full.ecpp"
  reply.out() << ( article->getText() );
  reply.out() << data[19]; // \n
  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[20]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[21]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[22]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[23]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[24]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[25]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[26]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[27]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[28]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[29]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[30]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[31]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[32]; //     </div>\n
  // </%include>
  reply.out() << data[33]; //   </div>\n
  // </%include>
#line 50 "article.ecpp"
 if(article->getCommentsView() && article->getCommentAmount()) {  

#line 51 "article.ecpp"
   std::vector<unsigned int> comm_ids = article->getCommentIds();

  reply.out() << data[34]; //   <h4 id="comments">Comments</h4>\n
#line 53 "article.ecpp"

   for(std::vector<unsigned int>::const_iterator it = comm_ids.begin();
       it != comm_ids.end() && it < comm_ids.begin() + vagra::getConfig("vablo", "article_site_comments", 5); it++) {
     vagra::CachedComment comment(*it);

  // <%include> inc/comment.ecpp
  reply.out() << data[35]; //         <div class="comment">\n          <p class="comment_info">\n            
#line 30 "inc/comment.ecpp"
  reply.sout() << ( vagra::date2str(comment->getCTime()) );
  reply.out() << data[36]; //  by \n
#line 31 "inc/comment.ecpp"
	    if(!comment->getHomepage().empty()) {

  reply.out() << data[37]; // \t      <a href="
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getHomepage() );
  reply.out() << data[38]; // ">
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[39]; // </a>\n
#line 33 "inc/comment.ecpp"
	    } else {

  reply.out() << data[40]; //               
#line 34 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[41]; // \n
#line 35 "inc/comment.ecpp"
	    }

  reply.out() << data[42]; //           </p>\n          <p class="comment_reply">\n            <a href="/comment/
#line 38 "inc/comment.ecpp"
  reply.sout() << ( comment->getId() );
  reply.out() << data[43]; // ">Reply</a>\n          </p>\n          <pre>
#line 40 "inc/comment.ecpp"
  reply.sout() << ( comment->getText() );
  reply.out() << data[44]; // </pre>\n        </div>\n
  // </%include>
#line 61 "article.ecpp"
   }

  reply.out() << data[45]; //   <a href="/comments/
#line 62 "article.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[46]; // #comments">All comments</a> | \n
#line 63 "article.ecpp"
 }

#line 64 "article.ecpp"
 if(article->getCommentsAllow()) {

  reply.out() << data[47]; //   <a href="/comments/
#line 65 "article.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[48]; // #comment"> Write comment</a>\n
#line 66 "article.ecpp"

  }
  sp.commit();
}
catch(const vagra::Exception& er_art) {
  reply.out() << er_art.what() << std::endl;
}
catch(const std::exception& er_art) {
  log_error(er_art.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[49]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[50]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[51]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
