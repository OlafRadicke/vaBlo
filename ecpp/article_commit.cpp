////////////////////////////////////////////////////////////////////////
// article_commit.cpp
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

log_define("component.article_commit")

// <%pre>
#line 28 "article_commit.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/exception.h>

#line 28 "inc/header.ecpp"

#include <vagra/article/tagsum.h>
#include <vagra/config.h>

#line 28 "inc/auth.ecpp"

  #include <vagra/config.h>
  #include <vagra/user/auth.h>
  #include <vagra/user/cacheduser.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("article_commit");

static const char* rawData = "\260\000\000\000\266\001\000\000\270\002\000\000\315\002\000\000\341\002\000\0008\003\000"
  "\000U\003\000\000W\003\000\000X\003\000\000`\003\000\000\234\003\000\000\344\003\000\000\346\003\000\000!\004\000\000"
  "X\005\000\000u\005\000\000\215\005\000\000\222\005\000\000\230\005\000\000\252\005\000\000\254\005\000\000\266\005"
  "\000\000\314\005\000\000\322\005\000\000\326\005\000\000\327\005\000\000\374\005\000\000\003\006\000\000\n\006\000"
  "\000\013\006\000\000\021\006\000\000\022\006\000\000*\006\000\000,\006\000\0001\006\000\000V\006\000\000a\006\000\000"
  "o\006\000\000z\006\000\000\203\006\000\000\356\006\000\000\031\007\000\000\233\007\000\000\266\007\000\000<!DOCTYPE h"
  "tml PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns="
  "\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/htm"
  "l; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\""
  " />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>"
  "\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <d"
  "iv id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n        "
  "  <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div id=\"au"
  "th_info\"> \n    <p>Logged in as <a href=\"/admin/user/update/\"></a>\n    | <a href=\"/admin/logout\">Logout</a></p>"
  "\n  </div>\n  <div id=\"menu\"> \n    <p>\n      <a href=\"/admin/\">Edit Article</a> <a href=\"/admin/article/new\">"
  "New Article</a> |\n      <a href=\"/admin/user/\">User List</a> <a href=\"/admin/user/new\">New User</a> |\n      <a "
  "href=\"/admin/context/\">Edit Context</a> <a href=\"/admin/context/new\">New Context</a>\n    </p>\n  </div>\n  <h4>C"
  "ommitted Article</h4>\n  <div class=\"article\">\n\t<h4></h4>\n    <h2><a href=\"/\"></a></h2>\n\t<p class=\"abstract"
  "\">  </p>\n    \n    <div class=\"article_info\">\n      \n      \n      \n      \n\t  <a href=\"/categories/\"></a>"
  "\n      | There are <a href=\"/comments/#comments\"> Comments</a>\n    </div>\n  </div>\n    <p class=\"warn\">Invali"
  "d article!</p>\n    <p class=\"warn\">You might need to enable session cookies.</p>\n     </div>\n   </div>\n   <div "
  "id=\"footer\">\n     <p>Served by <a href=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/pr"
  "ojects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("article_commit " << qparam.getUrl());

  tnt::DataChunks data(rawData);

#line 38 "article_commit.ecpp"
  typedef vagra::Article article_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(article_type, article, "vagra::Article article", ());   // <%securesession> vagra::Article article
#line 34 "inc/auth.ecpp"
  typedef vagra::Auth auth_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(auth_type, auth, "vagra::Auth auth", ());   // <%securesession> vagra::Auth auth
#line 35 "inc/auth.ecpp"
  typedef std::string orig_query_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(orig_query_type, orig_query, "std::string orig_query", ());   // <%securesession> std::string orig_query
#line 36 "inc/auth.ecpp"
  typedef bool redirected_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(redirected_type, redirected, "bool redirected", ( false));   // <%securesession> bool redirected( false)
#line 37 "inc/auth.ecpp"
  typedef bool cookies_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(cookies_type, cookies, "bool cookies", ( false));   // <%securesession> bool cookies( false)
  // <%cpp>
#line 34 "article_commit.ecpp"

  std::string title("Article committed");

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
  // <%include> inc/auth.ecpp
#line 39 "inc/auth.ecpp"

  if(!cookies) {
    if(request.getQueryString() == "cookietest") {
      request.clearSession();
      reply.redirect("/error/nocookie");
    }
    orig_query = request.getQuery();
    cookies = true;
    reply.redirect("/admin/login?cookietest");
  }  
  if (!redirected && !auth) {
    redirected = true;
    reply.redirect("/admin/login");
  }
  if(auth) {
    try {
      tnt::Savepoint sp(reply);
      vagra::CachedUser user(auth,auth);

  reply.out() << data[10]; //   <div id="auth_info"> \n    <p>Logged in as <a href="/admin/user/update/
#line 59 "inc/auth.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[11]; // ">
#line 59 "inc/auth.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[12]; // </a>\n    | <a href="/admin/logout">Logout</a></p>\n  </div>\n
#line 62 "inc/auth.ecpp"

      sp.commit();
    } catch(const std::exception& er_auth) {
      log_error(er_auth.what());
      request.clearSession();
      reply.redirect("/error/nologin");
    }
  }
  else {
    if(redirected && request.getQuery() != "/admin/login") {
      request.clearSession();
      reply.redirect("/error/nologin");
    }
  }

  // </%include>
  // <%include> inc/admin_menu.ecpp
#line 28 "inc/admin_menu.ecpp"

  try {
    tnt::Savepoint sp(reply);

  reply.out() << data[13]; //   <div id="menu"> \n    <p>\n      <a href="/admin/">Edit Article</a> <a href="/admin/article/new">New Article</a> |\n      <a href="/admin/user/">User List</a> <a href="/admin/user/new">New User</a> |\n      <a href="/admin/context/">Edit Context</a> <a href="/admin/context/new">New Context</a>\n    </p>\n  </div>\n
#line 39 "inc/admin_menu.ecpp"

    sp.commit();
  } catch(const std::exception& er_menu) {
    log_error(er_menu.what());
  }

  // </%include>
#line 45 "article_commit.ecpp"

try {
  tnt::Savepoint sp(reply);
  if(article) {
    article.dbCommit(auth);
    vagra::ArticleTags().updateResult();
    article = *(vagra::CachedArticle(article.getId(),auth));

  reply.out() << data[14]; //   <h4>Committed Article</h4>\n
  // <%include> inc/article_full.ecpp
  reply.out() << data[15]; //   <div class="article">\n
#line 29 "inc/article_full.ecpp"
   if(!article->getHead().empty()) {

  reply.out() << data[16]; // \t<h4>
#line 30 "inc/article_full.ecpp"
  reply.sout() << ( article->getHead() );
  reply.out() << data[17]; // </h4>\n
#line 31 "inc/article_full.ecpp"
   }

  reply.out() << data[18]; //     <h2><a href="/
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 32 "inc/article_full.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[19]; // ">
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[20]; // </a></h2>\n
#line 33 "inc/article_full.ecpp"
    if(!article->getAbstract().empty()) {

  reply.out() << data[21]; // \t<p class="abstract"> 
#line 34 "inc/article_full.ecpp"
  reply.sout() << ( article->getAbstract() );
  reply.out() << data[22]; //  </p>\n
#line 35 "inc/article_full.ecpp"
    }

  reply.out() << data[23]; //     
#line 36 "inc/article_full.ecpp"
  reply.out() << ( article->getText() );
  reply.out() << data[24]; // \n
  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[25]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[26]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[27]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[28]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[29]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[30]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[31]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[32]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[33]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[34]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[35]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[36]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[37]; //     </div>\n
  // </%include>
  reply.out() << data[38]; //   </div>\n
  // </%include>
#line 57 "article_commit.ecpp"
 } else {

  reply.out() << data[39]; //     <p class="warn">Invalid article!</p>\n    <p class="warn">You might need to enable session cookies.</p>\n
#line 60 "article_commit.ecpp"

  }
  article.clear();
  sp.commit();
}
catch(const vagra::Exception& er_art) {
  reply.out() << er_art.what() << std::endl;
}
catch(const std::exception& er_art) {
  log_error(er_art.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[40]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[41]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[42]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
