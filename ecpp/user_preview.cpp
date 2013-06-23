////////////////////////////////////////////////////////////////////////
// user_preview.cpp
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

log_define("component.user_preview")

// <%pre>
#line 28 "user_preview.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/user/user.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("user_preview");

static const char* rawData = "h\000\000\000n\001\000\000p\002\000\000\205\002\000\000\231\002\000\000\360\002\000\000"
  "\015\003\000\000\017\003\000\000\020\003\000\000\030\003\000\000T\003\000\000\234\003\000\000\236\003\000\000\331\003"
  "\000\000\020\005\000\000A\005\000\000W\005\000\000\343\005\000\000\001\006\000\000\227\006\000\000\007\007\000\000{"
  "\007\000\000\342\007\000\000\015\010\000\000\217\010\000\000\252\010\000\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML"
  " 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml"
  "\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n    <ti"
  "tle></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <link href=\"/feed/at"
  "om\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>\n\n  <div id=\"backg"
  "round\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"tags\">\n      <dl clas"
  "s=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n          <a href=\"/categories/\">()</"
  "a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div id=\"auth_info\"> \n    <p>Logged in a"
  "s <a href=\"/admin/user/update/\"></a>\n    | <a href=\"/admin/logout\">Logout</a></p>\n  </div>\n  <div id=\"menu\">"
  " \n    <p>\n      <a href=\"/admin/\">Edit Article</a> <a href=\"/admin/article/new\">New Article</a> |\n      <a hre"
  "f=\"/admin/user/\">User List</a> <a href=\"/admin/user/new\">New User</a> |\n      <a href=\"/admin/context/\">Edit C"
  "ontext</a> <a href=\"/admin/context/new\">New Context</a>\n    </p>\n  </div>\n    <h4>Submitted user data</h4>\n    "
  "<p>Logname: </p>\n    <p>Dispname: </p>\n    <form action=\"/admin/user/commit\" method=\"get\">\n      <div class=\""
  "submit\"><input type=\"submit\" value=\"Commit\" /></div>\n    </form>\n    <h4>Modify user data</h4>\n  <form action"
  "=\"/admin/user/preview/\" method=\"post\">\n    <fieldset>\n      <legend>Submit User</legend>\n      <input type=\"h"
  "idden\" name=\"i_uid\" value=\"\" />\n      <label for=\"logname\">Logname</label>\n        <input type=\"text\" name"
  "=\"i_logname\" id=\"logname\" value=\"\" />\n      <label for=\"Dispname\">Dispname</label>\n        <input type=\"te"
  "xt\" name=\"i_dispname\" id=\"dispname\" value=\"\" />\n      <div class=\"submit\"><input type=\"submit\" value=\"Pr"
  "eview\" /></div>\n    </fieldset>\n  </form>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a hr"
  "ef=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </"
  "div>\n </body>\n</html>\n";

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
  log_trace("user_preview " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%args>
unsigned int i_uid = qparam.has("i_uid") ? tnt::stringToWithDefault<unsigned int>(qparam.param("i_uid"), ( 0), reply.out().getloc()) : ( 0);
std::string i_logname = tnt::stringTo<std::string>("i_logname", "std::string", qparam.param("i_logname"), reply.out().getloc());
std::string i_dispname = tnt::stringTo<std::string>("i_dispname", "std::string", qparam.param("i_dispname"), reply.out().getloc());
  // </%args>

#line 42 "user_preview.ecpp"
  typedef vagra::User user_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(user_type, user, "vagra::User user", ());   // <%securesession> vagra::User user
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
#line 33 "user_preview.ecpp"

  std::string title("Preview User");

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
#line 49 "user_preview.ecpp"

try {
  tnt::Savepoint sp(reply);
  if(i_uid)
    user = vagra::User(i_uid, auth);
  else
    user.clear();

  user->setLogname(i_logname);
  user->setDispname(i_dispname);

  if(!user->getLogname().empty()) {

  reply.out() << data[14]; //     <h4>Submitted user data</h4>\n    <p>Logname: 
#line 63 "user_preview.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[15]; // </p>\n    <p>Dispname: 
#line 64 "user_preview.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[16]; // </p>\n    <form action="/admin/user/commit" method="get">\n      <div class="submit"><input type="submit" value="Commit" /></div>\n    </form>\n
#line 68 "user_preview.ecpp"

  }

  reply.out() << data[17]; //     <h4>Modify user data</h4>\n
  // <%include> inc/user_form.ecpp
  reply.out() << data[18]; //   <form action="/admin/user/preview/" method="post">\n    <fieldset>\n      <legend>Submit User</legend>\n      <input type="hidden" name="i_uid" value="
#line 31 "inc/user_form.ecpp"
  reply.sout() << ( i_uid );
  reply.out() << data[19]; // " />\n      <label for="logname">Logname</label>\n        <input type="text" name="i_logname" id="logname" value="
#line 33 "inc/user_form.ecpp"
  reply.sout() << ( i_logname );
  reply.out() << data[20]; // " />\n      <label for="Dispname">Dispname</label>\n        <input type="text" name="i_dispname" id="dispname" value="
#line 35 "inc/user_form.ecpp"
  reply.sout() << ( i_dispname);
  reply.out() << data[21]; // " />\n      <div class="submit"><input type="submit" value="Preview" /></div>\n    </fieldset>\n  </form>\n
  // </%include>
#line 75 "user_preview.ecpp"

  sp.commit();
}
catch(const std::exception& er_usr) {
  log_error(er_usr.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[22]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[23]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[24]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
