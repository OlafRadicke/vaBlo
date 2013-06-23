////////////////////////////////////////////////////////////////////////
// article_update.cpp
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

log_define("component.article_update")

// <%pre>
#line 28 "article_update.ecpp"

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

#line 28 "inc/article_form.ecpp"

  #include <vagra/cachedsearch.h>
  #include <vagra/cachedcontext.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("article_update");

static const char* rawData = "h\001\000\000n\002\000\000p\003\000\000\205\003\000\000\231\003\000\000\360\003\000\000"
  "\015\004\000\000\017\004\000\000\020\004\000\000\030\004\000\000T\004\000\000\234\004\000\000\236\004\000\000\331\004"
  "\000\000\020\006\000\000(\006\000\000-\006\000\0003\006\000\000E\006\000\000G\006\000\000Q\006\000\000g\006\000\000m"
  "\006\000\000q\006\000\000r\006\000\000\227\006\000\000\236\006\000\000\245\006\000\000\246\006\000\000\254\006\000"
  "\000\255\006\000\000\305\006\000\000\307\006\000\000\314\006\000\000\361\006\000\000\374\006\000\000\n\007\000\000"
  "\025\007\000\000\036\007\000\0009\007\000\000p\007\000\000\016\010\000\000\023\010\000\000\273\010\000\000\300\010"
  "\000\000*\t\000\000\241\t\000\000\035\n\000\000\262\n\000\000s\013\000\000\240\013\000\000\315\013\000\000\003\014"
  "\000\000\305\014\000\000\367\014\000\000\251\015\000\000\333\015\000\000Y\016\000\000r\016\000\000t\016\000\000u\016"
  "\000\000\177\016\000\000\366\016\000\000\016\017\000\000\023\017\000\000\031\017\000\000+\017\000\000-\017\000\0007"
  "\017\000\000M\017\000\000S\017\000\000W\017\000\000X\017\000\000}\017\000\000\204\017\000\000\213\017\000\000\214\017"
  "\000\000\222\017\000\000\223\017\000\000\253\017\000\000\255\017\000\000\262\017\000\000\327\017\000\000\342\017\000"
  "\000\360\017\000\000\373\017\000\000\004\020\000\000/\020\000\000\261\020\000\000\314\020\000\000<!DOCTYPE html PUBLI"
  "C \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://w"
  "ww.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset"
  "=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <"
  "link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>"
  "\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"ta"
  "gs\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n          <a href="
  "\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div id=\"auth_info\">"
  " \n    <p>Logged in as <a href=\"/admin/user/update/\"></a>\n    | <a href=\"/admin/logout\">Logout</a></p>\n  </div>"
  "\n  <div id=\"menu\"> \n    <p>\n      <a href=\"/admin/\">Edit Article</a> <a href=\"/admin/article/new\">New Articl"
  "e</a> |\n      <a href=\"/admin/user/\">User List</a> <a href=\"/admin/user/new\">New User</a> |\n      <a href=\"/ad"
  "min/context/\">Edit Context</a> <a href=\"/admin/context/new\">New Context</a>\n    </p>\n  </div>\n  <div class=\"ar"
  "ticle\">\n\t<h4></h4>\n    <h2><a href=\"/\"></a></h2>\n\t<p class=\"abstract\">  </p>\n    \n    <div class=\"articl"
  "e_info\">\n      \n      \n      \n      \n\t  <a href=\"/categories/\"></a>\n      | There are <a href=\"/comments/#"
  "comments\"> Comments</a>\n    </div>\n  </div>\n  <a href=\"/admin/comments/#comments\">Edit comments</a>\n  <h4>Modi"
  "fy Article</h4>\n  <form action=\"/admin/article/preview\" method=\"post\">\n    <fieldset>\n      <legend>Submit Art"
  "icle</legend>\n      <input type=\"hidden\" name=\"i_art_id\" value=\"\" />\n      <label for=\"title\">Title<span cl"
  "ass=\"desc\">(will be part of the URL, _ are handled as spaces)</span></label>\n\t<input type=\"text\" name=\"i_title"
  "\" id=\"title\" value=\"\" />\n      <label for=\"fl_headline\">Headline</label>\n\t<input type=\"text\" name=\"i_hea"
  "d\" id=\"fl_headline\" value=\"\" />\n      <label for=\"fl_abstract\">Abstract</label>\n\t<textarea name=\"i_abstrac"
  "t\" id=\"fl_abstract\" rows=\"10\" cols=\"80\"></textarea>\n      <label for=\"fl_article\">Article text</label>\n\t<"
  "textarea name=\"i_text\" id=\"fl_article\" rows=\"30\" cols=\"80\"></textarea>\n      <label for=\"fl_tags\">Tags<spa"
  "n class=\"desc\">(comma separated)</span></label>\n\t<input type=\"text\" name=\"i_tags\" id=\"fl_tags\" value=\"\" /"
  ">\n      <label for=\"fl_readlevel\">ReadLevel<span class=\"desc\">(who is allowed to read this article)</span></labe"
  "l>\n\t<select name=\"i_readlevel\" id=\"fl_readlevel\">\n          <option value=\"2\" >Public</option>\n          <o"
  "ption value=\"8\" >Users</option>\n          <option value=\"14\" >Context member</option>\n          <option value="
  "\"30\" >Privileged and owner</option>\n        </select>\n      <label for=\"fl_commentsallow\">Allow comments</label"
  ">\n\t<select name=\"i_commentsallow\" id=\"fl_commentsallow\">\n          <option value=\"true\" >Enabled</option>\n "
  "         <option value=\"false\" >Disabled</option>\n        </select>\n      <label for=\"fl_commentsshow\">Show com"
  "ments</label>\n\t<select name=\"i_commentsshow\" id=\"fl_commentsshow\">\n          <option value=\"true\" >Enabled</"
  "option>\n          <option value=\"false\" >Disabled</option>\n        </select>\n      <label for=\"fl_context\">Con"
  "text</label>\n\t<select name=\"i_context\" id=\"fl_context\">\n          <option value=\"\" ></option>\n        </sel"
  "ect>\n      <div class=\"fl_submit\"><input type=\"submit\" value=\"Preview\" /></div>\n    </fieldset>\n  </form>\n "
  " <div class=\"article\">\n\t<h4></h4>\n    <h2><a href=\"/\"></a></h2>\n\t<p class=\"abstract\">  </p>\n    \n    <di"
  "v class=\"article_info\">\n      \n      \n      \n      \n\t  <a href=\"/categories/\"></a>\n      | There are <a hr"
  "ef=\"/comments/#comments\"> Comments</a>\n    </div>\n  </div>\n     </div>\n   </div>\n   <div id=\"footer\">\n     "
  "<p>Served by <a href=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo "
  "0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("article_update " << qparam.getUrl());

  tnt::DataChunks data(rawData);

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
#line 34 "article_update.ecpp"

  std::string title("Update Article");

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
#line 42 "article_update.ecpp"

try {
  tnt::Savepoint sp(reply);

  vagra::Article article(request.getPathInfo(),auth);
  if(article.getId()) {
    unsigned int i_art_id = article.getId();
    unsigned int i_readlevel = article.getReadLevel();
    unsigned int i_context = article.getContext()->getId();
    bool i_commentsallow = article.getCommentsAllow();
    bool i_commentsshow = article.getCommentsView();
    std::string i_title(article.getTitle());
    std::string i_head(article.getHead());
    std::string i_abstract(article.getAbstract());
    std::string i_text(article.getText());
    std::string i_tags(article.getTagString());

  // <%include> inc/article_full.ecpp
  reply.out() << data[14]; //   <div class="article">\n
#line 29 "inc/article_full.ecpp"
   if(!article->getHead().empty()) {

  reply.out() << data[15]; // \t<h4>
#line 30 "inc/article_full.ecpp"
  reply.sout() << ( article->getHead() );
  reply.out() << data[16]; // </h4>\n
#line 31 "inc/article_full.ecpp"
   }

  reply.out() << data[17]; //     <h2><a href="/
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 32 "inc/article_full.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[18]; // ">
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[19]; // </a></h2>\n
#line 33 "inc/article_full.ecpp"
    if(!article->getAbstract().empty()) {

  reply.out() << data[20]; // \t<p class="abstract"> 
#line 34 "inc/article_full.ecpp"
  reply.sout() << ( article->getAbstract() );
  reply.out() << data[21]; //  </p>\n
#line 35 "inc/article_full.ecpp"
    }

  reply.out() << data[22]; //     
#line 36 "inc/article_full.ecpp"
  reply.out() << ( article->getText() );
  reply.out() << data[23]; // \n
  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[24]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[25]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[26]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[27]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[28]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[29]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[30]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[31]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[32]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[33]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[34]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[35]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[36]; //     </div>\n
  // </%include>
  reply.out() << data[37]; //   </div>\n
  // </%include>
  reply.out() << data[38]; //   <a href="/admin/comments/
#line 62 "article_update.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[39]; // #comments">Edit comments</a>\n  <h4>Modify Article</h4>\n
  // <%include> inc/article_form.ecpp
#line 32 "inc/article_form.ecpp"

  vagra::CachedSearch<vagra::Context> search;
  search.setReadLevel(254); //find all
  std::vector<unsigned int> results(search.getResults());

  reply.out() << data[40]; //   <form action="/admin/article/preview" method="post">\n    <fieldset>\n      <legend>Submit Article</legend>\n      <input type="hidden" name="i_art_id" value="
#line 40 "inc/article_form.ecpp"
  reply.sout() << ( i_art_id );
  reply.out() << data[41]; // " />\n
#line 41 "inc/article_form.ecpp"
   if(!i_art_id) {

  reply.out() << data[42]; //       <label for="title">Title<span class="desc">(will be part of the URL, _ are handled as spaces)</span></label>\n\t<input type="text" name="i_title" id="title" value="
#line 43 "inc/article_form.ecpp"
  reply.sout() << ( i_title );
  reply.out() << data[43]; // " />\n
#line 44 "inc/article_form.ecpp"
   }

  reply.out() << data[44]; //       <label for="fl_headline">Headline</label>\n\t<input type="text" name="i_head" id="fl_headline" value="
#line 46 "inc/article_form.ecpp"
  reply.sout() << ( i_head );
  reply.out() << data[45]; // " />\n      <label for="fl_abstract">Abstract</label>\n\t<textarea name="i_abstract" id="fl_abstract" rows="10" cols="80">
#line 48 "inc/article_form.ecpp"
  reply.sout() << ( i_abstract );
  reply.out() << data[46]; // </textarea>\n      <label for="fl_article">Article text</label>\n\t<textarea name="i_text" id="fl_article" rows="30" cols="80">
#line 50 "inc/article_form.ecpp"
  reply.sout() << ( i_text );
  reply.out() << data[47]; // </textarea>\n      <label for="fl_tags">Tags<span class="desc">(comma separated)</span></label>\n\t<input type="text" name="i_tags" id="fl_tags" value="
#line 52 "inc/article_form.ecpp"
  reply.sout() << ( i_tags);
  reply.out() << data[48]; // " />\n      <label for="fl_readlevel">ReadLevel<span class="desc">(who is allowed to read this article)</span></label>\n\t<select name="i_readlevel" id="fl_readlevel">\n          <option value="2" 
#line 55 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 2 ? "selected=\"selected\" " : "" );
  reply.out() << data[49]; // >Public</option>\n          <option value="8" 
#line 56 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 8 ? "selected=\"selected\" " : "" );
  reply.out() << data[50]; // >Users</option>\n          <option value="14" 
#line 57 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 14 ? "selected=\"selected\" " : "" );
  reply.out() << data[51]; // >Context member</option>\n          <option value="30" 
#line 58 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 30 ? "selected=\"selected\" " : "" );
  reply.out() << data[52]; // >Privileged and owner</option>\n        </select>\n      <label for="fl_commentsallow">Allow comments</label>\n\t<select name="i_commentsallow" id="fl_commentsallow">\n          <option value="true" 
#line 62 "inc/article_form.ecpp"
  reply.out() << ( i_commentsallow == true ? "selected=\"selected\" " : "" );
  reply.out() << data[53]; // >Enabled</option>\n          <option value="false" 
#line 63 "inc/article_form.ecpp"
  reply.out() << ( i_commentsallow == false ? "selected=\"selected\" " : "" );
  reply.out() << data[54]; // >Disabled</option>\n        </select>\n      <label for="fl_commentsshow">Show comments</label>\n\t<select name="i_commentsshow" id="fl_commentsshow">\n          <option value="true" 
#line 67 "inc/article_form.ecpp"
  reply.out() << ( i_commentsshow == true ? "selected=\"selected\" " : "" );
  reply.out() << data[55]; // >Enabled</option>\n          <option value="false" 
#line 68 "inc/article_form.ecpp"
  reply.out() << ( i_commentsshow == false ? "selected=\"selected\" " : "" );
  reply.out() << data[56]; // >Disabled</option>\n        </select>\n      <label for="fl_context">Context</label>\n\t<select name="i_context" id="fl_context">\n
#line 72 "inc/article_form.ecpp"
       for(std::vector<unsigned int>::const_iterator it = results.begin(); it != results.end(); it++) {

#line 73 "inc/article_form.ecpp"
         try {

#line 74 "inc/article_form.ecpp"
           tnt::Savepoint csp(reply);

#line 75 "inc/article_form.ecpp"
           vagra::CachedContext ctx(*it, auth);

  reply.out() << data[57]; //           <option value="
#line 76 "inc/article_form.ecpp"
  reply.sout() << ( ctx->getId() );
  reply.out() << data[58]; // " 
#line 76 "inc/article_form.ecpp"
  reply.out() << ( i_context == ctx->getId() ? "selected=\"selected\" " : "" );
  reply.out() << data[59]; // >
#line 76 "inc/article_form.ecpp"
  reply.sout() << ( ctx->getName() );
  reply.out() << data[60]; // </option>\n
#line 77 "inc/article_form.ecpp"
           csp.commit();

#line 78 "inc/article_form.ecpp"
         } catch(const std::exception& er_ctx) {

#line 79 "inc/article_form.ecpp"
           log_error(er_ctx.what());

#line 80 "inc/article_form.ecpp"
         }

#line 81 "inc/article_form.ecpp"
       }

  reply.out() << data[61]; //         </select>\n      <div class="fl_submit"><input type="submit" value="Preview" /></div>\n    </fieldset>\n  </form>\n
  // </%include>
#line 67 "article_update.ecpp"
  } else {

  // <%include> inc/article_full.ecpp
  reply.out() << data[62]; //   <div class="article">\n
#line 29 "inc/article_full.ecpp"
   if(!article->getHead().empty()) {

  reply.out() << data[63]; // \t<h4>
#line 30 "inc/article_full.ecpp"
  reply.sout() << ( article->getHead() );
  reply.out() << data[64]; // </h4>\n
#line 31 "inc/article_full.ecpp"
   }

  reply.out() << data[65]; //     <h2><a href="/
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrlBase() );
#line 32 "inc/article_full.ecpp"
  reply.out() << ( article->getUrlBase().empty() ? "" : "/" );
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[66]; // ">
#line 32 "inc/article_full.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[67]; // </a></h2>\n
#line 33 "inc/article_full.ecpp"
    if(!article->getAbstract().empty()) {

  reply.out() << data[68]; // \t<p class="abstract"> 
#line 34 "inc/article_full.ecpp"
  reply.sout() << ( article->getAbstract() );
  reply.out() << data[69]; //  </p>\n
#line 35 "inc/article_full.ecpp"
    }

  reply.out() << data[70]; //     
#line 36 "inc/article_full.ecpp"
  reply.out() << ( article->getText() );
  reply.out() << data[71]; // \n
  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[72]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[73]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[74]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[75]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[76]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[77]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[78]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[79]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[80]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[81]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[82]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[83]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[84]; //     </div>\n
  // </%include>
  reply.out() << data[85]; //   </div>\n
  // </%include>
#line 71 "article_update.ecpp"

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
  reply.out() << data[86]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[87]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[88]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
