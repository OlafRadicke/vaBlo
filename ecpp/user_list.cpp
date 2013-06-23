////////////////////////////////////////////////////////////////////////
// user_list.cpp
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

log_define("component.user_list")

// <%pre>
#line 28 "user_list.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/exception.h>
  #include <vagra/page.h>
  #include <vagra/utils.h>
  #include <vagra/cachedsearch.h>
  #include <vagra/user/cacheduser.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("user_list");

static const char* rawData = "\274\000\000\000\302\001\000\000\304\002\000\000\331\002\000\000\355\002\000\000D\003\000"
  "\000a\003\000\000c\003\000\000d\003\000\000l\003\000\000\250\003\000\000\360\003\000\000\362\003\000\000-\004\000\000"
  "d\005\000\000\341\005\000\000\364\005\000\000\004\006\000\000\024\006\000\000@\006\000\000z\006\000\000\237\006\000"
  "\000\252\006\000\000\275\006\000\000\307\006\000\000\330\006\000\000\373\006\000\000\004\007\000\000\016\007\000\000"
  "\017\007\000\000\"\007\000\000$\007\000\000)\007\000\0007\007\000\0009\007\000\000>\007\000\000G\007\000\000O\007\000"
  "\000P\007\000\000a\007\000\000c\007\000\000|\007\000\000\207\007\000\000\220\007\000\000\273\007\000\000=\010\000\000"
  "X\010\000\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-stri"
  "ct.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Ty"
  "pe\" content=\"text/html; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesh"
  "eet\" type=\"text/css\" />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Ato"
  "m feed\" />\n  </head>\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h"
  "1>\n    </div>\n    <div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n"
  "        <dd>\n          <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"cont"
  "ent\">\n  <div id=\"auth_info\"> \n    <p>Logged in as <a href=\"/admin/user/update/\"></a>\n    | <a href=\"/admin/l"
  "ogout\">Logout</a></p>\n  </div>\n  <div id=\"menu\"> \n    <p>\n      <a href=\"/admin/\">Edit Article</a> <a href="
  "\"/admin/article/new\">New Article</a> |\n      <a href=\"/admin/user/\">User List</a> <a href=\"/admin/user/new\">Ne"
  "w User</a> |\n      <a href=\"/admin/context/\">Edit Context</a> <a href=\"/admin/context/new\">New Context</a>\n    "
  "</p>\n  </div>\n  <table class=\"userlist\">\n    <tr class=\"thead\">\n      <th>Id</th>\n      <th>Logname</th>\n  "
  "    <th>Dispname</th>\n    </tr>\n    <tr>\n      <td></td>\n      <td></td>\n      <td></td>\n      <td><a href=\"/a"
  "dmin/user/update/\">Modify</a></td>\n      <td><a href=\"/admin/passwd/update/\">Change Password</a></td>\n    </tr>"
  "\n  </table>\n  <div id=\"pager\">\n        1\n        <a href=\"\">Previous</a> \302\253\n        <a href=\"1\">1</a"
  ">\n          \n          <a href=\"\"></a>\n\t    <a href=\"\"></a>\n\t    \342\200\246\n        \n        <a href=\""
  "\"></a>\n        \302\273 <a href=\"\">Next</a>\n  </div>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Se"
  "rved by <a href=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</"
  "a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("user_list " << qparam.getUrl());

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
#line 37 "user_list.ecpp"

  std::string title("users");
  std::string page_url("/admin/user/");

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
#line 46 "user_list.ecpp"

try {
  tnt::Savepoint sp(reply);

  vagra::CachedSearch<vagra::User> search;
  search.setReadLevel(254); //find all
  vagra::Page pg(search.getResults(), vagra::str2Pagenum(request.getPathInfo()), 24);

  reply.out() << data[14]; //   <table class="userlist">\n    <tr class="thead">\n      <th>Id</th>\n      <th>Logname</th>\n      <th>Dispname</th>\n    </tr>\n
#line 60 "user_list.ecpp"

  for (vagra::Page::const_iterator it = pg.begin();
	it != pg.end(); it++)
  try {
    tnt::Savepoint usp(reply);
    vagra::CachedUser user(*it, auth);

  reply.out() << data[15]; //     <tr>\n      <td>
#line 68 "user_list.ecpp"
  reply.sout() << ( user->getId() );
  reply.out() << data[16]; // </td>\n      <td>
#line 69 "user_list.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[17]; // </td>\n      <td>
#line 70 "user_list.ecpp"
  reply.sout() << ( user->getDispname() );
  reply.out() << data[18]; // </td>\n      <td><a href="/admin/user/update/
#line 71 "user_list.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[19]; // ">Modify</a></td>\n      <td><a href="/admin/passwd/update/
#line 72 "user_list.ecpp"
  reply.sout() << ( user->getLogname() );
  reply.out() << data[20]; // ">Change Password</a></td>\n    </tr>\n
#line 74 "user_list.ecpp"

    usp.commit();
  } catch(const std::exception& er_usr) {
    log_error(er_usr.what());
  }

  reply.out() << data[21]; //   </table>\n
  // <%include> inc/pager.ecpp
#line 28 "inc/pager.ecpp"
   if(pg.getAmount() > 1) {

  reply.out() << data[22]; //   <div id="pager">\n
#line 30 "inc/pager.ecpp"
     if(pg.getCurrent() == 1) {

  reply.out() << data[23]; //         1\n
#line 32 "inc/pager.ecpp"
     } else {

  reply.out() << data[24]; //         <a href="
#line 33 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 33 "inc/pager.ecpp"
  reply.sout() << ( pg.getPrevious() );
  reply.out() << data[25]; // ">Previous</a> \302\253\n        <a href="
#line 34 "inc/pager.ecpp"
  reply.sout() << ( page_url );
  reply.out() << data[26]; // 1">1</a>\n
#line 35 "inc/pager.ecpp"
     }

#line 36 "inc/pager.ecpp"
     for(int page = 2; page < pg.getAmount(); page++) {

#line 37 "inc/pager.ecpp"
       if(page == pg.getCurrent()) {

  reply.out() << data[27]; //           
#line 38 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[28]; // \n
#line 39 "inc/pager.ecpp"
       } else if ((page < pg.getCurrent() && page > pg.getCurrent() -6 ) ||

#line 40 "inc/pager.ecpp"
		   (page > pg.getCurrent() && page < pg.getCurrent() +6 )) {

  reply.out() << data[29]; //           <a href="
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[30]; // ">
#line 41 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[31]; // </a>\n
#line 42 "inc/pager.ecpp"
       } else if (page == pg.getCurrent() -6 || page == pg.getCurrent() + 6) {

#line 43 "inc/pager.ecpp"
	  if(page == 2 || page == pg.getAmount() -1) {

  reply.out() << data[32]; // \t    <a href="
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[33]; // ">
#line 44 "inc/pager.ecpp"
  reply.sout() << ( page );
  reply.out() << data[34]; // </a>\n
#line 45 "inc/pager.ecpp"
	  } else {

  reply.out() << data[35]; // \t    \342\200\246\n
#line 47 "inc/pager.ecpp"
	  }

#line 48 "inc/pager.ecpp"
       }

#line 49 "inc/pager.ecpp"
     }

#line 50 "inc/pager.ecpp"
     if(pg.getCurrent() == pg.getAmount()) {

  reply.out() << data[36]; //         
#line 51 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[37]; // \n
#line 52 "inc/pager.ecpp"
     } else {

  reply.out() << data[38]; //         <a href="
#line 53 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 53 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[39]; // ">
#line 53 "inc/pager.ecpp"
  reply.sout() << ( pg.getAmount() );
  reply.out() << data[40]; // </a>\n        \302\273 <a href="
#line 54 "inc/pager.ecpp"
  reply.sout() << ( page_url );
#line 54 "inc/pager.ecpp"
  reply.sout() << ( pg.getNext() );
  reply.out() << data[41]; // ">Next</a>\n
#line 55 "inc/pager.ecpp"
     }

  reply.out() << data[42]; //   </div>\n
#line 57 "inc/pager.ecpp"
   }

  // </%include>
#line 84 "user_list.ecpp"

  sp.commit();
}
catch(const vagra::Exception& er_usr) {
  reply.out() << er_usr.what() << std::endl;
}
catch(const std::exception& er_usr) {
  log_error(er_usr.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[43]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[44]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[45]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
