////////////////////////////////////////////////////////////////////////
// context_update.cpp
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

log_define("component.context_update")

// <%pre>
#line 28 "context_update.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/context.h>

#line 28 "inc/header.ecpp"

#include <vagra/article/tagsum.h>
#include <vagra/config.h>

#line 28 "inc/auth.ecpp"

  #include <vagra/config.h>
  #include <vagra/user/auth.h>
  #include <vagra/user/cacheduser.h>

#line 28 "inc/user_row.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/user/user.h>

#line 28 "inc/user_row.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/user/user.h>

#line 28 "inc/user_row.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/user/user.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("context_update");

static const char* rawData = "\360\000\000\000\366\001\000\000\370\002\000\000\015\003\000\000!\003\000\000x\003\000"
  "\000\225\003\000\000\227\003\000\000\230\003\000\000\240\003\000\000\334\003\000\000$\004\000\000&\004\000\000a\004"
  "\000\000\230\005\000\000\304\005\000\000<\007\000\000o\007\000\000\242\007\000\000\344\007\000\000\030\010\000\000Z"
  "\010\000\000{\t\000\000\256\t\000\000\341\t\000\000#\n\000\000W\n\000\000\231\n\000\000\276\013\000\000\361\013\000"
  "\000$\014\000\000f\014\000\000\232\014\000\000\334\014\000\000\333\016\000\000\265\017\000\000\321\017\000\000\002"
  "\020\000\000\004\020\000\000T\020\000\000\224\020\000\000\004\021\000\000\015\023\000\000)\023\000\000Z\023\000\000"
  "\134\023\000\000\254\023\000\000\354\023\000\000\134\024\000\000_\026\000\000{\026\000\000\254\026\000\000\256\026"
  "\000\000\376\026\000\000>\027\000\000\256\027\000\0001\031\000\000\134\031\000\000\336\031\000\000\371\031\000\000<!D"
  "OCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html"
  " xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"t"
  "ext/html; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"tex"
  "t/css\" />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  <"
  "/head>\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n"
  "    <div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <dd>\n  "
  "        <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div i"
  "d=\"auth_info\"> \n    <p>Logged in as <a href=\"/admin/user/update/\"></a>\n    | <a href=\"/admin/logout\">Logout</"
  "a></p>\n  </div>\n  <div id=\"menu\"> \n    <p>\n      <a href=\"/admin/\">Edit Article</a> <a href=\"/admin/article/"
  "new\">New Article</a> |\n      <a href=\"/admin/user/\">User List</a> <a href=\"/admin/user/new\">New User</a> |\n   "
  "   <a href=\"/admin/context/\">Edit Context</a> <a href=\"/admin/context/new\">New Context</a>\n    </p>\n  </div>\n "
  "   <div class=\"context\">\n      <h4>Context </h4>\n      <p><form action=\"/admin/context/preview\" method=\"post\""
  ">\n        <table class=\"ctxlist\">\n          <caption>Default&nbsp;object&nbsp;privilegs</caption>\n          <tr>"
  "\n            <td>ReadLevel</td>\n            <td>\n              <input type=\"hidden\" name=\"i_type\" value=\"upda"
  "te_privs\" />\n              <select name=\"i_readlevel\">\n                <option value=\"2\" >Public</option>\n   "
  "             <option value=\"8\" >Users</option>\n                <option value=\"14\" >Context unprivileged</option>"
  "\n                <option value=\"30\" >Owner</option> \n                <option value=\"62\" >Context privileged</op"
  "tion> \n                <option value=\"126\" >Superuser</option> \n              </select>\n            </td>\n     "
  "     </tr>\n          <tr>\n            <td>AddLevel</td>\n            <td>\n              <input type=\"hidden\" nam"
  "e=\"i_type\" value=\"update_privs\" />\n              <select name=\"i_addlevel\">\n                <option value=\"2"
  "\" >Public</option>\n                <option value=\"8\" >Users</option>\n                <option value=\"14\" >Conte"
  "xt unprivileged</option>\n                <option value=\"30\" >Owner</option> \n                <option value=\"62\""
  " >Context privileged</option> \n                <option value=\"126\" >Superuser</option> \n              </select>\n"
  "            </td>\n          </tr>\n          <tr>\n            <td>WriteLevel</td>\n            <td>\n              "
  "<input type=\"hidden\" name=\"i_type\" value=\"update_privs\" />\n              <select name=\"i_writelevel\">\n     "
  "           <option value=\"2\" >Public</option>\n                <option value=\"8\" >Users</option>\n               "
  " <option value=\"14\" >Context unprivileged</option>\n                <option value=\"30\" >Owner</option> \n        "
  "        <option value=\"62\" >Context privileged</option> \n                <option value=\"126\" >Superuser</option>"
  " \n              </select>\n            </td>\n          </tr>\n          <tr>\n            <td>\n            </td>\n"
  "            <td>\n              <input type=\"submit\" value=\"update\" />\n            </td>\n          </tr>\n     "
  "   </table>\n      </form></p>\n      <p><form action=\"/admin/context/preview\" method=\"post\">\n        <input typ"
  "e=\"hidden\" name=\"i_type\" value=\"update_urlbase\" />\n        <label for=\"fl_urlbase\">Url base</label>\n\t  <in"
  "put type=\"text\" name=\"i_urlbase\"  id=\"fl_urlbase\" value=\"\" />\n        <input type=\"submit\" value=\"update"
  "\" />\n      </form></p>\n      <p><form action=\"/admin/context/preview\" method=\"post\">\n        <table class=\"u"
  "serlist\">\n          <caption>Unprivileged&nbsp;users</caption>\n\t    <tr><td>none</td></tr>\n            <tr>\n\t "
  "     <td><a href=\"/admin/user/\"></a></td>\n\t      <td>\n                <input type=\"hidden\" name=\"i_type\" val"
  "ue=\"\" />\n                <input type=\"hidden\" name=\"i_value\" value=\"\" />\n                <input type=\"subm"
  "it\" value=\"remove\" class=\"txtbt\" />\n              </td>\n            </tr>\n        </table>\n      </form>\n  "
  "    <form action=\"/admin/context/preview\" method=\"post\">\n        <fieldset class=\"singlefield\">\n         <leg"
  "end>Add unprivileged</legend>\n         <input type=\"hidden\" name=\"i_type\" value=\"add_unprivileged\" />\n       "
  "  <input type=\"text\" name=\"i_value\" value=\"\" />\n         <input type=\"submit\" value=\"Add\" />\n        </fi"
  "eldset>\n      </form>\n      <form action=\"/admin/context/preview\" method=\"post\">\n        <table class=\"userli"
  "st\">\n          <caption>Privileged&nbsp;users</caption>\n\t    <tr><td>none</td></tr>\n            <tr>\n\t      <t"
  "d><a href=\"/admin/user/\"></a></td>\n\t      <td>\n                <input type=\"hidden\" name=\"i_type\" value=\"\""
  " />\n                <input type=\"hidden\" name=\"i_value\" value=\"\" />\n                <input type=\"submit\" va"
  "lue=\"remove\" class=\"txtbt\" />\n              </td>\n            </tr>\n        </table>\n      </form>\n      <fo"
  "rm action=\"/admin/context/preview\" method=\"post\">\n        <fieldset class=\"singlefield\">\n         <legend>Add"
  " privileged</legend>\n         <input type=\"hidden\" name=\"i_type\" value=\"add_privileged\" />\n         <input ty"
  "pe=\"text\" name=\"i_value\" value=\"\" />\n         <input type=\"submit\" value=\"Add\" />\n        </fieldset>\n  "
  "    </form>\n      <form action=\"/admin/context/preview\" method=\"post\">\n        <table class=\"userlist\">\n    "
  "      <caption>Context&nbsp;admins</caption>\n\t    <tr><td>none</td></tr>\n            <tr>\n\t      <td><a href=\"/"
  "admin/user/\"></a></td>\n\t      <td>\n                <input type=\"hidden\" name=\"i_type\" value=\"\" />\n        "
  "        <input type=\"hidden\" name=\"i_value\" value=\"\" />\n                <input type=\"submit\" value=\"remove"
  "\" class=\"txtbt\" />\n              </td>\n            </tr>\n        </table>\n      </form>\n      <form action=\""
  "/admin/context/preview\" method=\"post\">\n        <fieldset class=\"singlefield\">\n         <legend>Add context adm"
  "in</legend>\n         <input type=\"hidden\" name=\"i_type\" value=\"add_admin\" />\n         <input type=\"text\" na"
  "me=\"i_value\" value=\"\" />\n         <input type=\"submit\" value=\"Add\" />\n        </fieldset>\n      </form></p"
  ">\n    </div>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www.tntnet.org/\">t"
  "ntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("context_update " << qparam.getUrl());

  tnt::DataChunks data(rawData);

#line 37 "context_update.ecpp"
  typedef vagra::Context context_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(context_type, context, "vagra::Context context", ());   // <%securesession> vagra::Context context
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
#line 33 "context_update.ecpp"

  std::string title("Update Context");

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
#line 44 "context_update.ecpp"

try {
  tnt::Savepoint sp(reply);
  context = vagra::Context(request.getPathInfo(), auth);

  if(context) {

  // <%include> inc/context_form.ecpp
#line 28 "inc/context_form.ecpp"

  char _read_level = context->getReadLevel();
  char _add_level = context->getAddLevel();
  char _write_level = context->getWriteLevel();

  if(_read_level <= 2)
    _read_level = 2;
  else if(_read_level <= 8)
    _read_level = 8;
  else if(_read_level <= 14)
    _read_level = 14;
  else if(_read_level <= 30)
    _read_level = 30;
  else if(_read_level <= 62)
    _read_level = 62;
  else
    _read_level = 126;
  
  if(_add_level <= 2)
    _add_level = 2;
  else if(_add_level <= 8)
    _add_level = 8;
  else if(_add_level <= 14)
    _add_level = 14;
  else if(_add_level <= 30)
    _add_level = 30;
  else if(_add_level <= 62)
    _add_level = 62;
  else
    _add_level = 126;

  if(_write_level <= 2)
    _write_level = 2;
  else if(_write_level <= 8)
    _write_level = 8;
  else if(_write_level <= 14)
    _write_level = 14;
  else if(_write_level <= 30)
    _write_level = 30;
  else if(_write_level <= 62)
    _write_level = 62;
  else
    _write_level = 126;


  reply.out() << data[14]; //     <div class="context">\n      <h4>Context 
#line 74 "inc/context_form.ecpp"
  reply.sout() << ( context->getName() );
  reply.out() << data[15]; // </h4>\n      <p><form action="/admin/context/preview" method="post">\n        <table class="ctxlist">\n          <caption>Default&nbsp;object&nbsp;privilegs</caption>\n          <tr>\n            <td>ReadLevel</td>\n            <td>\n              <input type="hidden" name="i_type" value="update_privs" />\n              <select name="i_readlevel">\n                <option value="2" 
#line 83 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 2 ? "selected=\"selected\" " : "" );
  reply.out() << data[16]; // >Public</option>\n                <option value="8" 
#line 84 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 8 ? "selected=\"selected\" " : "" );
  reply.out() << data[17]; // >Users</option>\n                <option value="14" 
#line 85 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 14 ? "selected=\"selected\" " : "" );
  reply.out() << data[18]; // >Context unprivileged</option>\n                <option value="30" 
#line 86 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 30 ? "selected=\"selected\" " : "" );
  reply.out() << data[19]; // >Owner</option> \n                <option value="62" 
#line 87 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 62 ? "selected=\"selected\" " : "" );
  reply.out() << data[20]; // >Context privileged</option> \n                <option value="126" 
#line 88 "inc/context_form.ecpp"
  reply.out() << ( _read_level == 126 ? "selected=\"selected\" " : "" );
  reply.out() << data[21]; // >Superuser</option> \n              </select>\n            </td>\n          </tr>\n          <tr>\n            <td>AddLevel</td>\n            <td>\n              <input type="hidden" name="i_type" value="update_privs" />\n              <select name="i_addlevel">\n                <option value="2" 
#line 97 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 2 ? "selected=\"selected\" " : "" );
  reply.out() << data[22]; // >Public</option>\n                <option value="8" 
#line 98 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 8 ? "selected=\"selected\" " : "" );
  reply.out() << data[23]; // >Users</option>\n                <option value="14" 
#line 99 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 14 ? "selected=\"selected\" " : "" );
  reply.out() << data[24]; // >Context unprivileged</option>\n                <option value="30" 
#line 100 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 30 ? "selected=\"selected\" " : "" );
  reply.out() << data[25]; // >Owner</option> \n                <option value="62" 
#line 101 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 62 ? "selected=\"selected\" " : "" );
  reply.out() << data[26]; // >Context privileged</option> \n                <option value="126" 
#line 102 "inc/context_form.ecpp"
  reply.out() << ( _add_level == 126 ? "selected=\"selected\" " : "" );
  reply.out() << data[27]; // >Superuser</option> \n              </select>\n            </td>\n          </tr>\n          <tr>\n            <td>WriteLevel</td>\n            <td>\n              <input type="hidden" name="i_type" value="update_privs" />\n              <select name="i_writelevel">\n                <option value="2" 
#line 111 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 2 ? "selected=\"selected\" " : "" );
  reply.out() << data[28]; // >Public</option>\n                <option value="8" 
#line 112 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 8 ? "selected=\"selected\" " : "" );
  reply.out() << data[29]; // >Users</option>\n                <option value="14" 
#line 113 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 14 ? "selected=\"selected\" " : "" );
  reply.out() << data[30]; // >Context unprivileged</option>\n                <option value="30" 
#line 114 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 30 ? "selected=\"selected\" " : "" );
  reply.out() << data[31]; // >Owner</option> \n                <option value="62" 
#line 115 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 62 ? "selected=\"selected\" " : "" );
  reply.out() << data[32]; // >Context privileged</option> \n                <option value="126" 
#line 116 "inc/context_form.ecpp"
  reply.out() << ( _write_level == 126 ? "selected=\"selected\" " : "" );
  reply.out() << data[33]; // >Superuser</option> \n              </select>\n            </td>\n          </tr>\n          <tr>\n            <td>\n            </td>\n            <td>\n              <input type="submit" value="update" />\n            </td>\n          </tr>\n        </table>\n      </form></p>\n      <p><form action="/admin/context/preview" method="post">\n        <input type="hidden" name="i_type" value="update_urlbase" />\n        <label for="fl_urlbase">Url base</label>\n\t  <input type="text" name="i_urlbase"  id="fl_urlbase" value="
#line 132 "inc/context_form.ecpp"
  reply.sout() << ( context->getUrlBase() );
  reply.out() << data[34]; // " />\n        <input type="submit" value="update" />\n      </form></p>\n      <p><form action="/admin/context/preview" method="post">\n        <table class="userlist">\n          <caption>Unprivileged&nbsp;users</caption>\n
#line 138 "inc/context_form.ecpp"
	  const std::vector<unsigned int>& unprivileged = context->getUnprivileged();

#line 139 "inc/context_form.ecpp"
         if(unprivileged.empty())

  reply.out() << data[35]; // \t    <tr><td>none</td></tr>\n
#line 141 "inc/context_form.ecpp"
         std::string i_type("rem_unprivileged");

#line 142 "inc/context_form.ecpp"
	  for(std::vector<unsigned int>::const_iterator user_iter = unprivileged.begin();

#line 143 "inc/context_form.ecpp"
	      user_iter != unprivileged.end(); user_iter++) {

  // <%include> inc/user_row.ecpp
#line 33 "inc/user_row.ecpp"

          try {
            tnt::Savepoint usp(reply);
            vagra::CachedUser user(*user_iter, auth);

  reply.out() << data[36]; //             <tr>\n\t      <td><a href="/admin/user/
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[37]; // ">
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[38]; // </a></td>\n\t      <td>\n                <input type="hidden" name="i_type" value="
#line 41 "inc/user_row.ecpp"
  reply.sout() << ( i_type );
  reply.out() << data[39]; // " />\n                <input type="hidden" name="i_value" value="
#line 42 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[40]; // " />\n                <input type="submit" value="remove" class="txtbt" />\n              </td>\n            </tr>\n
#line 46 "inc/user_row.ecpp"

            usp.commit();
          } catch(const std::exception& er_usp) {
            log_error(er_usp.what());
          }

  // </%include>
#line 147 "inc/context_form.ecpp"
	}

  reply.out() << data[41]; //         </table>\n      </form>\n      <form action="/admin/context/preview" method="post">\n        <fieldset class="singlefield">\n         <legend>Add unprivileged</legend>\n         <input type="hidden" name="i_type" value="add_unprivileged" />\n         <input type="text" name="i_value" value="" />\n         <input type="submit" value="Add" />\n        </fieldset>\n      </form>\n      <form action="/admin/context/preview" method="post">\n        <table class="userlist">\n          <caption>Privileged&nbsp;users</caption>\n
#line 161 "inc/context_form.ecpp"
         const std::vector<unsigned int>& privileged = context->getPrivileged();

#line 162 "inc/context_form.ecpp"
	  if(privileged.empty())

  reply.out() << data[42]; // \t    <tr><td>none</td></tr>\n
#line 164 "inc/context_form.ecpp"
         i_type = "rem_privileged";

#line 165 "inc/context_form.ecpp"
	  for(std::vector<unsigned int>::const_iterator user_iter = privileged.begin();

#line 166 "inc/context_form.ecpp"
	      user_iter != privileged.end(); user_iter++) {

  // <%include> inc/user_row.ecpp
#line 33 "inc/user_row.ecpp"

          try {
            tnt::Savepoint usp(reply);
            vagra::CachedUser user(*user_iter, auth);

  reply.out() << data[43]; //             <tr>\n\t      <td><a href="/admin/user/
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[44]; // ">
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[45]; // </a></td>\n\t      <td>\n                <input type="hidden" name="i_type" value="
#line 41 "inc/user_row.ecpp"
  reply.sout() << ( i_type );
  reply.out() << data[46]; // " />\n                <input type="hidden" name="i_value" value="
#line 42 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[47]; // " />\n                <input type="submit" value="remove" class="txtbt" />\n              </td>\n            </tr>\n
#line 46 "inc/user_row.ecpp"

            usp.commit();
          } catch(const std::exception& er_usp) {
            log_error(er_usp.what());
          }

  // </%include>
#line 170 "inc/context_form.ecpp"
	}

  reply.out() << data[48]; //         </table>\n      </form>\n      <form action="/admin/context/preview" method="post">\n        <fieldset class="singlefield">\n         <legend>Add privileged</legend>\n         <input type="hidden" name="i_type" value="add_privileged" />\n         <input type="text" name="i_value" value="" />\n         <input type="submit" value="Add" />\n        </fieldset>\n      </form>\n      <form action="/admin/context/preview" method="post">\n        <table class="userlist">\n          <caption>Context&nbsp;admins</caption>\n
#line 184 "inc/context_form.ecpp"
	  const std::vector<unsigned int>& admin = context->getAdmin();

#line 185 "inc/context_form.ecpp"
         if(admin.empty())

  reply.out() << data[49]; // \t    <tr><td>none</td></tr>\n
#line 187 "inc/context_form.ecpp"
         i_type = "rem_admin";

#line 188 "inc/context_form.ecpp"
         for(std::vector<unsigned int>::const_iterator user_iter = admin.begin();

#line 189 "inc/context_form.ecpp"
	      user_iter != admin.end(); user_iter++) {

  // <%include> inc/user_row.ecpp
#line 33 "inc/user_row.ecpp"

          try {
            tnt::Savepoint usp(reply);
            vagra::CachedUser user(*user_iter, auth);

  reply.out() << data[50]; //             <tr>\n\t      <td><a href="/admin/user/
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[51]; // ">
#line 39 "inc/user_row.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[52]; // </a></td>\n\t      <td>\n                <input type="hidden" name="i_type" value="
#line 41 "inc/user_row.ecpp"
  reply.sout() << ( i_type );
  reply.out() << data[53]; // " />\n                <input type="hidden" name="i_value" value="
#line 42 "inc/user_row.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[54]; // " />\n                <input type="submit" value="remove" class="txtbt" />\n              </td>\n            </tr>\n
#line 46 "inc/user_row.ecpp"

            usp.commit();
          } catch(const std::exception& er_usp) {
            log_error(er_usp.what());
          }

  // </%include>
#line 193 "inc/context_form.ecpp"
	}

  reply.out() << data[55]; //         </table>\n      </form>\n      <form action="/admin/context/preview" method="post">\n        <fieldset class="singlefield">\n         <legend>Add context admin</legend>\n         <input type="hidden" name="i_type" value="add_admin" />\n         <input type="text" name="i_value" value="" />\n         <input type="submit" value="Add" />\n        </fieldset>\n      </form></p>\n    </div>\n
  // </%include>
#line 54 "context_update.ecpp"

  }
  sp.commit();
}
catch(const std::exception& er_ctx) {
  log_error(er_ctx.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[56]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[57]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[58]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
