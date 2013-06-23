////////////////////////////////////////////////////////////////////////
// comment_commit.cpp
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

log_define("component.comment_commit")

// <%pre>
#line 28 "comment_commit.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/comment/comment.h>
  #include <vagra/exception.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("comment_commit");

static const char* rawData = "p\000\000\000v\001\000\000x\002\000\000\215\002\000\000\241\002\000\000\370\002\000\000"
  "\025\003\000\000\027\003\000\000\030\003\000\000 \003\000\000\134\003\000\000y\003\000\000\306\003\000\000\313\003"
  "\000\000\333\003\000\000\335\003\000\000\342\003\000\000\360\003\000\000\361\003\000\000B\004\000\000l\004\000\000"
  "\202\004\000\000\216\004\000\000\244\004\000\000\017\005\000\000:\005\000\000\274\005\000\000\327\005\000\000<!DOCTYP"
  "E html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmln"
  "s=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/h"
  "tml; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css"
  "\" />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head"
  ">\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <"
  "div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n       "
  "   <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <h4>Committ"
  "ed comment</h4>\n        <div class=\"comment\">\n          <p class=\"comment_info\">\n             by \n\t      <a "
  "href=\"\"></a>\n              \n          </p>\n          <p class=\"comment_reply\">\n            <a href=\"/comment"
  "/\">Reply</a>\n          </p>\n          <pre></pre>\n        </div>\n  <a href=\"/\">Back to article</a>\n    <p cla"
  "ss=\"warn\">Invalid comment!</p>\n    <p class=\"warn\">You might need to enable session cookies.</p>\n     </div>\n "
  "  </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"htt"
  "p://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("comment_commit " << qparam.getUrl());

  tnt::DataChunks data(rawData);

#line 39 "comment_commit.ecpp"
  typedef vagra::Comment comment_type;
  TNT_SESSION_GLOBAL_VAR(comment_type, comment, "vagra::Comment comment", ());   // <%session> vagra::Comment comment
  // <%cpp>
#line 35 "comment_commit.ecpp"

  std::string title("Comment committed");

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
#line 44 "comment_commit.ecpp"

try {
  tnt::Savepoint sp(reply);
  vagra::CachedArticle article(comment.getArticle());
  if(article->getCommentsAllow() && comment) {
    comment.setContext("comments");
    comment.dbCommit();

  reply.out() << data[10]; //   <h4>Committed comment</h4>\n
  // <%include> inc/comment.ecpp
  reply.out() << data[11]; //         <div class="comment">\n          <p class="comment_info">\n            
#line 30 "inc/comment.ecpp"
  reply.sout() << ( vagra::date2str(comment->getCTime()) );
  reply.out() << data[12]; //  by \n
#line 31 "inc/comment.ecpp"
	    if(!comment->getHomepage().empty()) {

  reply.out() << data[13]; // \t      <a href="
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getHomepage() );
  reply.out() << data[14]; // ">
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[15]; // </a>\n
#line 33 "inc/comment.ecpp"
	    } else {

  reply.out() << data[16]; //               
#line 34 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[17]; // \n
#line 35 "inc/comment.ecpp"
	    }

  reply.out() << data[18]; //           </p>\n          <p class="comment_reply">\n            <a href="/comment/
#line 38 "inc/comment.ecpp"
  reply.sout() << ( comment->getId() );
  reply.out() << data[19]; // ">Reply</a>\n          </p>\n          <pre>
#line 40 "inc/comment.ecpp"
  reply.sout() << ( comment->getText() );
  reply.out() << data[20]; // </pre>\n        </div>\n
  // </%include>
  reply.out() << data[21]; //   <a href="/
#line 56 "comment_commit.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 56 "comment_commit.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 56 "comment_commit.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[22]; // ">Back to article</a>\n
#line 57 "comment_commit.ecpp"
 } else {

  reply.out() << data[23]; //     <p class="warn">Invalid comment!</p>\n    <p class="warn">You might need to enable session cookies.</p>\n
#line 60 "comment_commit.ecpp"

  }
  comment.clear();
  sp.commit();
}
catch(const vagra::Exception& er_comm) {
  reply.out() << er_comm.what() << std::endl;
}
catch(const std::exception& er_comm) {
  log_error(er_comm.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[24]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[25]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[26]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
