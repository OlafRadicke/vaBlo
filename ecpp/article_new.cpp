////////////////////////////////////////////////////////////////////////
// article_new.cpp
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

log_define("component.article_new")

// <%pre>
#line 28 "article_new.ecpp"

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

static tnt::ComponentFactoryImpl<_component_> Factory("article_new");

static const char* rawData = "\244\000\000\000\252\001\000\000\254\002\000\000\301\002\000\000\325\002\000\000,\003\000"
  "\000I\003\000\000K\003\000\000L\003\000\000T\003\000\000\220\003\000\000\330\003\000\000\332\003\000\000\025\004\000"
  "\000L\005\000\000c\005\000\000\001\006\000\000\006\006\000\000\256\006\000\000\263\006\000\000\035\007\000\000\224"
  "\007\000\000\020\010\000\000\245\010\000\000f\t\000\000\223\t\000\000\300\t\000\000\366\t\000\000\270\n\000\000\352\n"
  "\000\000\234\013\000\000\316\013\000\000L\014\000\000e\014\000\000g\014\000\000h\014\000\000r\014\000\000\351\014\000"
  "\000\024\015\000\000\226\015\000\000\261\015\000\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http"
  "://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <h"
  "ead>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n    <title></title>\n    <link h"
  "ref=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <link href=\"/feed/atom\" type=\"application/a"
  "tom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>\n\n  <div id=\"background\">\n    <div id=\"h"
  "ead\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>"
  "\n          categories\n        </dt>\n        <dd>\n          <a href=\"/categories/\">()</a>\n          </dd>\n    "
  "  </dl>\n    </div>\n    <div id=\"content\">\n  <div id=\"auth_info\"> \n    <p>Logged in as <a href=\"/admin/user/u"
  "pdate/\"></a>\n    | <a href=\"/admin/logout\">Logout</a></p>\n  </div>\n  <div id=\"menu\"> \n    <p>\n      <a href"
  "=\"/admin/\">Edit Article</a> <a href=\"/admin/article/new\">New Article</a> |\n      <a href=\"/admin/user/\">User L"
  "ist</a> <a href=\"/admin/user/new\">New User</a> |\n      <a href=\"/admin/context/\">Edit Context</a> <a href=\"/adm"
  "in/context/new\">New Context</a>\n    </p>\n  </div>\n  <h4>New Article</h4>\n  <form action=\"/admin/article/preview"
  "\" method=\"post\">\n    <fieldset>\n      <legend>Submit Article</legend>\n      <input type=\"hidden\" name=\"i_art"
  "_id\" value=\"\" />\n      <label for=\"title\">Title<span class=\"desc\">(will be part of the URL, _ are handled as "
  "spaces)</span></label>\n\t<input type=\"text\" name=\"i_title\" id=\"title\" value=\"\" />\n      <label for=\"fl_hea"
  "dline\">Headline</label>\n\t<input type=\"text\" name=\"i_head\" id=\"fl_headline\" value=\"\" />\n      <label for="
  "\"fl_abstract\">Abstract</label>\n\t<textarea name=\"i_abstract\" id=\"fl_abstract\" rows=\"10\" cols=\"80\"></textar"
  "ea>\n      <label for=\"fl_article\">Article text</label>\n\t<textarea name=\"i_text\" id=\"fl_article\" rows=\"30\" "
  "cols=\"80\"></textarea>\n      <label for=\"fl_tags\">Tags<span class=\"desc\">(comma separated)</span></label>\n\t<i"
  "nput type=\"text\" name=\"i_tags\" id=\"fl_tags\" value=\"\" />\n      <label for=\"fl_readlevel\">ReadLevel<span cla"
  "ss=\"desc\">(who is allowed to read this article)</span></label>\n\t<select name=\"i_readlevel\" id=\"fl_readlevel\">"
  "\n          <option value=\"2\" >Public</option>\n          <option value=\"8\" >Users</option>\n          <option va"
  "lue=\"14\" >Context member</option>\n          <option value=\"30\" >Privileged and owner</option>\n        </select>"
  "\n      <label for=\"fl_commentsallow\">Allow comments</label>\n\t<select name=\"i_commentsallow\" id=\"fl_commentsal"
  "low\">\n          <option value=\"true\" >Enabled</option>\n          <option value=\"false\" >Disabled</option>\n   "
  "     </select>\n      <label for=\"fl_commentsshow\">Show comments</label>\n\t<select name=\"i_commentsshow\" id=\"fl"
  "_commentsshow\">\n          <option value=\"true\" >Enabled</option>\n          <option value=\"false\" >Disabled</op"
  "tion>\n        </select>\n      <label for=\"fl_context\">Context</label>\n\t<select name=\"i_context\" id=\"fl_conte"
  "xt\">\n          <option value=\"\" ></option>\n        </select>\n      <div class=\"fl_submit\"><input type=\"submi"
  "t\" value=\"Preview\" /></div>\n    </fieldset>\n  </form>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>S"
  "erved by <a href=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6<"
  "/a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("article_new " << qparam.getUrl());

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
#line 34 "article_new.ecpp"

  std::string title("New Article");

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
#line 42 "article_new.ecpp"

try {
  unsigned int i_art_id = 0;
  unsigned int i_readlevel = 8;
  unsigned int i_context = 1;
  bool i_commentsallow = true;
  bool i_commentsshow = true;
  std::string i_title;
  std::string i_head;
  std::string i_abstract;
  std::string i_text;
  std::string i_tags;
  tnt::Savepoint sp(reply);

  reply.out() << data[14]; //   <h4>New Article</h4>\n
  // <%include> inc/article_form.ecpp
#line 32 "inc/article_form.ecpp"

  vagra::CachedSearch<vagra::Context> search;
  search.setReadLevel(254); //find all
  std::vector<unsigned int> results(search.getResults());

  reply.out() << data[15]; //   <form action="/admin/article/preview" method="post">\n    <fieldset>\n      <legend>Submit Article</legend>\n      <input type="hidden" name="i_art_id" value="
#line 40 "inc/article_form.ecpp"
  reply.sout() << ( i_art_id );
  reply.out() << data[16]; // " />\n
#line 41 "inc/article_form.ecpp"
   if(!i_art_id) {

  reply.out() << data[17]; //       <label for="title">Title<span class="desc">(will be part of the URL, _ are handled as spaces)</span></label>\n\t<input type="text" name="i_title" id="title" value="
#line 43 "inc/article_form.ecpp"
  reply.sout() << ( i_title );
  reply.out() << data[18]; // " />\n
#line 44 "inc/article_form.ecpp"
   }

  reply.out() << data[19]; //       <label for="fl_headline">Headline</label>\n\t<input type="text" name="i_head" id="fl_headline" value="
#line 46 "inc/article_form.ecpp"
  reply.sout() << ( i_head );
  reply.out() << data[20]; // " />\n      <label for="fl_abstract">Abstract</label>\n\t<textarea name="i_abstract" id="fl_abstract" rows="10" cols="80">
#line 48 "inc/article_form.ecpp"
  reply.sout() << ( i_abstract );
  reply.out() << data[21]; // </textarea>\n      <label for="fl_article">Article text</label>\n\t<textarea name="i_text" id="fl_article" rows="30" cols="80">
#line 50 "inc/article_form.ecpp"
  reply.sout() << ( i_text );
  reply.out() << data[22]; // </textarea>\n      <label for="fl_tags">Tags<span class="desc">(comma separated)</span></label>\n\t<input type="text" name="i_tags" id="fl_tags" value="
#line 52 "inc/article_form.ecpp"
  reply.sout() << ( i_tags);
  reply.out() << data[23]; // " />\n      <label for="fl_readlevel">ReadLevel<span class="desc">(who is allowed to read this article)</span></label>\n\t<select name="i_readlevel" id="fl_readlevel">\n          <option value="2" 
#line 55 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 2 ? "selected=\"selected\" " : "" );
  reply.out() << data[24]; // >Public</option>\n          <option value="8" 
#line 56 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 8 ? "selected=\"selected\" " : "" );
  reply.out() << data[25]; // >Users</option>\n          <option value="14" 
#line 57 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 14 ? "selected=\"selected\" " : "" );
  reply.out() << data[26]; // >Context member</option>\n          <option value="30" 
#line 58 "inc/article_form.ecpp"
  reply.out() << ( i_readlevel == 30 ? "selected=\"selected\" " : "" );
  reply.out() << data[27]; // >Privileged and owner</option>\n        </select>\n      <label for="fl_commentsallow">Allow comments</label>\n\t<select name="i_commentsallow" id="fl_commentsallow">\n          <option value="true" 
#line 62 "inc/article_form.ecpp"
  reply.out() << ( i_commentsallow == true ? "selected=\"selected\" " : "" );
  reply.out() << data[28]; // >Enabled</option>\n          <option value="false" 
#line 63 "inc/article_form.ecpp"
  reply.out() << ( i_commentsallow == false ? "selected=\"selected\" " : "" );
  reply.out() << data[29]; // >Disabled</option>\n        </select>\n      <label for="fl_commentsshow">Show comments</label>\n\t<select name="i_commentsshow" id="fl_commentsshow">\n          <option value="true" 
#line 67 "inc/article_form.ecpp"
  reply.out() << ( i_commentsshow == true ? "selected=\"selected\" " : "" );
  reply.out() << data[30]; // >Enabled</option>\n          <option value="false" 
#line 68 "inc/article_form.ecpp"
  reply.out() << ( i_commentsshow == false ? "selected=\"selected\" " : "" );
  reply.out() << data[31]; // >Disabled</option>\n        </select>\n      <label for="fl_context">Context</label>\n\t<select name="i_context" id="fl_context">\n
#line 72 "inc/article_form.ecpp"
       for(std::vector<unsigned int>::const_iterator it = results.begin(); it != results.end(); it++) {

#line 73 "inc/article_form.ecpp"
         try {

#line 74 "inc/article_form.ecpp"
           tnt::Savepoint csp(reply);

#line 75 "inc/article_form.ecpp"
           vagra::CachedContext ctx(*it, auth);

  reply.out() << data[32]; //           <option value="
#line 76 "inc/article_form.ecpp"
  reply.sout() << ( ctx->getId() );
  reply.out() << data[33]; // " 
#line 76 "inc/article_form.ecpp"
  reply.out() << ( i_context == ctx->getId() ? "selected=\"selected\" " : "" );
  reply.out() << data[34]; // >
#line 76 "inc/article_form.ecpp"
  reply.sout() << ( ctx->getName() );
  reply.out() << data[35]; // </option>\n
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

  reply.out() << data[36]; //         </select>\n      <div class="fl_submit"><input type="submit" value="Preview" /></div>\n    </fieldset>\n  </form>\n
  // </%include>
#line 60 "article_new.ecpp"

  sp.commit();
}
catch(const vagra::Exception& er_art) {
  reply.out() << er_art.what() << std::endl;
}
catch(const std::exception& er_art) {
  log_error(er_art.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[37]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[38]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[39]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
