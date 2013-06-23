////////////////////////////////////////////////////////////////////////
// comment_update.cpp
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

log_define("component.comment_update")

// <%pre>
#line 28 "comment_update.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/comment/comment.h>
  #include <vagra/exception.h>
  #include <vagra/utils.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("comment_update");

static const char* rawData = "\344\000\000\000\352\001\000\000\354\002\000\000\001\003\000\000\025\003\000\000l\003\000"
  "\000\211\003\000\000\213\003\000\000\214\003\000\000\224\003\000\000\320\003\000\000\030\004\000\000\032\004\000\000U"
  "\004\000\000\214\005\000\000\313\005\000\000\315\005\000\000\327\005\000\000\374\005\000\000\003\006\000\000\n\006"
  "\000\000\013\006\000\000\021\006\000\000\022\006\000\000*\006\000\000,\006\000\0001\006\000\000V\006\000\000a\006\000"
  "\000o\006\000\000z\006\000\000\203\006\000\000\233\006\000\000\350\006\000\000\355\006\000\000\375\006\000\000\377"
  "\006\000\000\004\007\000\000\022\007\000\000\023\007\000\000d\007\000\000\216\007\000\000\244\007\000\0001\010\000"
  "\000g\010\000\000\221\010\000\000\370\010\000\0000\t\000\000g\t\000\000\317\t\000\000l\n\000\000\323\n\000\0004\013"
  "\000\000\245\013\000\000\320\013\000\000R\014\000\000m\014\000\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Stric"
  "t//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang"
  "=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n    <title></title"
  ">\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <link href=\"/feed/atom\" type="
  "\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>\n\n  <div id=\"background\">\n"
  "    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"tags\">\n      <dl class=\"tags\""
  ">\n        <dt>\n          categories\n        </dt>\n        <dd>\n          <a href=\"/categories/\">()</a>\n      "
  "    </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n  <div id=\"auth_info\"> \n    <p>Logged in as <a href="
  "\"/admin/user/update/\"></a>\n    | <a href=\"/admin/logout\">Logout</a></p>\n  </div>\n  <div id=\"menu\"> \n    <p>"
  "\n      <a href=\"/admin/\">Edit Article</a> <a href=\"/admin/article/new\">New Article</a> |\n      <a href=\"/admin"
  "/user/\">User List</a> <a href=\"/admin/user/new\">New User</a> |\n      <a href=\"/admin/context/\">Edit Context</a>"
  " <a href=\"/admin/context/new\">New Context</a>\n    </p>\n  </div>\n  <div class=\"article\">\n    <h3><a href=\"/ad"
  "min/article/update/\"></a></h3>\n    <div class=\"article_info\">\n      \n      \n      \n      \n\t  <a href=\"/cat"
  "egories/\"></a>\n      | There are <a href=\"/comments/#comments\"> Comments</a>\n    </div>\n  </div>\n  <h4>Edit co"
  "mment</h4>\n        <div class=\"comment\">\n          <p class=\"comment_info\">\n             by \n\t      <a href="
  "\"\"></a>\n              \n          </p>\n          <p class=\"comment_reply\">\n            <a href=\"/comment/\">R"
  "eply</a>\n          </p>\n          <pre></pre>\n        </div>\n    <form action=\"/admin/comment/commit\" method=\""
  "get\">\n      <div class=\"fl_submit\"><input type=\"submit\" value=\"Commit\" /></div>\n    </form>\n  <form action="
  "\"/admin/comment/update\" method=\"post\">\n  <form action=\"/comment/\" method=\"post\">\n    <fieldset>\n      <leg"
  "end>Submit comment</legend>\n      <input type=\"hidden\" name=\"i_art_id\" value=\"\" />\n      <input type=\"hidden"
  "\" name=\"i_comm_id\" value=\"\" />\n      <input type=\"hidden\" name=\"i_ref_id\" value=\"\" />\n      <label for="
  "\"fl_name\">Your Name</label>\n\t<input type=\"text\" name=\"i_name\" id=\"fl_name\" value=\"\" />\n      <label for="
  "\"fl_mail\">eMail Address<span class=\"desc\">(will not be published)</span></label>\n\t<input type=\"text\" name=\"i"
  "_mail\" id=\"fl_mail\" value=\"\" />\n      <label for=\"fl_home\">Homepage</label>\n\t<input type=\"text\" name=\"i_"
  "home\" id=\"fl_home\" value=\"\" />\n      <label for=\"fl_comment\">Comment text</label>\n\t<textarea name=\"i_text"
  "\" id=\"fl_comment\"></textarea>\n      <div class=\"fl_submit\"><input type=\"submit\" value=\"Preview\" /></div>\n "
  "   </fieldset>\n  </form>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www.tnt"
  "net.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</h"
  "tml>\n";

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
  log_trace("comment_update " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%args>
std::string i_name = tnt::stringTo<std::string>("i_name", "std::string", qparam.param("i_name"), reply.out().getloc());
std::string i_mail = tnt::stringTo<std::string>("i_mail", "std::string", qparam.param("i_mail"), reply.out().getloc());
std::string i_home = tnt::stringTo<std::string>("i_home", "std::string", qparam.param("i_home"), reply.out().getloc());
std::string i_text = tnt::stringTo<std::string>("i_text", "std::string", qparam.param("i_text"), reply.out().getloc());
unsigned int i_art_id = qparam.has("i_art_id") ? tnt::stringToWithDefault<unsigned int>(qparam.param("i_art_id"), ( 0), reply.out().getloc()) : ( 0);
unsigned int i_ref_id = qparam.has("i_ref_id") ? tnt::stringToWithDefault<unsigned int>(qparam.param("i_ref_id"), ( 0), reply.out().getloc()) : ( 0);
unsigned int i_comm_id = qparam.has("i_comm_id") ? tnt::stringToWithDefault<unsigned int>(qparam.param("i_comm_id"), ( 0), reply.out().getloc()) : ( 0);
  // </%args>

#line 50 "comment_update.ecpp"
  typedef vagra::Comment comment_type;
  TNT_SECURE_SESSION_GLOBAL_VAR(comment_type, comment, "vagra::Comment comment", ());   // <%securesession> vagra::Comment comment
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
#line 36 "comment_update.ecpp"

  std::string title("Edit Comment");
  bool ready = false;

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
#line 57 "comment_update.ecpp"

try {
  tnt::Savepoint sp(reply);

  if(!comment) {
	comment = vagra::Comment(vagra::str2unsigned(request.getPathInfo()), auth);
  } else if(comment.getId() == i_comm_id) {
    comment.setAuthor(i_name);
    comment.setMail(i_mail);
    comment.setHomepage(i_home);
    comment.setText(i_text);
    comment.setRef(i_ref_id);
    ready = true;
  }
  vagra::CachedArticle article(comment.getArticle(), auth);
  i_name = comment.getAuthor();
  i_mail = comment.getMail();
  i_home = comment.getHomepage();
  i_text = comment.getText();
  i_art_id = comment.getArticle();
  i_ref_id = comment.getRef();
  i_comm_id = comment.getId();

  // <%include> inc/article_admin.ecpp
  reply.out() << data[14]; //   <div class="article">\n    <h3><a href="/admin/article/update/
#line 29 "inc/article_admin.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[15]; // ">
#line 29 "inc/article_admin.ecpp"
  reply.sout() << ( article->getTitle() );
  reply.out() << data[16]; // </a></h3>\n
#line 30 "inc/article_admin.ecpp"

    if(article->getAbstract().empty())
	reply.out() << article->getText();
    else
	reply.out() << article->getAbstract();

  // <%include> inc/article_info.ecpp
#line 28 "inc/article_info.ecpp"
   if (article == 0) throw std::domain_error(gettext("article not found"));

  reply.out() << data[17]; //     <div class="article_info">\n      
#line 30 "inc/article_info.ecpp"
  reply.sout() << ( vagra::date2str(article->getCTime()) );
  reply.out() << data[18]; // \n      
#line 31 "inc/article_info.ecpp"
  if ( !article->getAuthor().empty() )
    reply.sout() <<  " by " + article->getAuthor() ;
  reply.out() << data[19]; // \n      
#line 32 "inc/article_info.ecpp"
  if ( article->getMTime() != article->getCTime() )
    reply.sout() <<  " | Updated at " + vagra::date2str(article->getMTime()) ;
  reply.out() << data[20]; // \n
#line 33 "inc/article_info.ecpp"
	std::vector<std::string> art_tags = article->getTags();

  reply.out() << data[21]; //       
#line 34 "inc/article_info.ecpp"
  if ( !art_tags.empty() )
    reply.sout() <<  " | Tags: " ;
  reply.out() << data[22]; // \n
#line 35 "inc/article_info.ecpp"
	for(std::vector<std::string>::const_iterator tit = art_tags.begin();

#line 36 "inc/article_info.ecpp"
	    tit != art_tags.end(); tit++) {

  reply.out() << data[23]; // \t  <a href="/categories/
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[24]; // ">
#line 37 "inc/article_info.ecpp"
  reply.sout() << ( *tit );
  reply.out() << data[25]; // </a>\n
#line 38 "inc/article_info.ecpp"
	}

#line 39 "inc/article_info.ecpp"
	if(article->getCommentsView()) {

  reply.out() << data[26]; //       | There are <a href="/comments/
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getUrl() );
  reply.out() << data[27]; // #comments">
#line 40 "inc/article_info.ecpp"
  reply.sout() << ( article->getCommentAmount() );
  reply.out() << data[28]; //  Comments</a>\n
#line 41 "inc/article_info.ecpp"
	}

  reply.out() << data[29]; //     </div>\n
  // </%include>
  reply.out() << data[30]; //   </div>\n
  // </%include>
  reply.out() << data[31]; //   <h4>Edit comment</h4>\n
  // <%include> inc/comment.ecpp
  reply.out() << data[32]; //         <div class="comment">\n          <p class="comment_info">\n            
#line 30 "inc/comment.ecpp"
  reply.sout() << ( vagra::date2str(comment->getCTime()) );
  reply.out() << data[33]; //  by \n
#line 31 "inc/comment.ecpp"
	    if(!comment->getHomepage().empty()) {

  reply.out() << data[34]; // \t      <a href="
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getHomepage() );
  reply.out() << data[35]; // ">
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[36]; // </a>\n
#line 33 "inc/comment.ecpp"
	    } else {

  reply.out() << data[37]; //               
#line 34 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[38]; // \n
#line 35 "inc/comment.ecpp"
	    }

  reply.out() << data[39]; //           </p>\n          <p class="comment_reply">\n            <a href="/comment/
#line 38 "inc/comment.ecpp"
  reply.sout() << ( comment->getId() );
  reply.out() << data[40]; // ">Reply</a>\n          </p>\n          <pre>
#line 40 "inc/comment.ecpp"
  reply.sout() << ( comment->getText() );
  reply.out() << data[41]; // </pre>\n        </div>\n
  // </%include>
#line 87 "comment_update.ecpp"
 if(ready) {

  reply.out() << data[42]; //     <form action="/admin/comment/commit" method="get">\n      <div class="fl_submit"><input type="submit" value="Commit" /></div>\n    </form>\n
#line 91 "comment_update.ecpp"
 }

  // <%include> inc/comment_form.ecpp
#line 28 "inc/comment_form.ecpp"
if(i_comm_id) {

  reply.out() << data[43]; //   <form action="/admin/comment/update" method="post">\n
#line 30 "inc/comment_form.ecpp"
 } else {

  reply.out() << data[44]; //   <form action="/comment/" method="post">\n
#line 32 "inc/comment_form.ecpp"
 }

  reply.out() << data[45]; //     <fieldset>\n      <legend>Submit comment</legend>\n      <input type="hidden" name="i_art_id" value="
#line 35 "inc/comment_form.ecpp"
  reply.sout() << ( i_art_id );
  reply.out() << data[46]; // " />\n      <input type="hidden" name="i_comm_id" value="
#line 36 "inc/comment_form.ecpp"
  reply.sout() << ( i_comm_id );
  reply.out() << data[47]; // " />\n      <input type="hidden" name="i_ref_id" value="
#line 37 "inc/comment_form.ecpp"
  reply.sout() << ( i_ref_id );
  reply.out() << data[48]; // " />\n      <label for="fl_name">Your Name</label>\n\t<input type="text" name="i_name" id="fl_name" value="
#line 39 "inc/comment_form.ecpp"
  reply.sout() << ( i_name );
  reply.out() << data[49]; // " />\n      <label for="fl_mail">eMail Address<span class="desc">(will not be published)</span></label>\n\t<input type="text" name="i_mail" id="fl_mail" value="
#line 41 "inc/comment_form.ecpp"
  reply.sout() << ( i_mail );
  reply.out() << data[50]; // " />\n      <label for="fl_home">Homepage</label>\n\t<input type="text" name="i_home" id="fl_home" value="
#line 43 "inc/comment_form.ecpp"
  reply.sout() << ( i_home );
  reply.out() << data[51]; // " />\n      <label for="fl_comment">Comment text</label>\n\t<textarea name="i_text" id="fl_comment">
#line 45 "inc/comment_form.ecpp"
  reply.sout() << ( i_text );
  reply.out() << data[52]; // </textarea>\n      <div class="fl_submit"><input type="submit" value="Preview" /></div>\n    </fieldset>\n  </form>\n
  // </%include>
#line 95 "comment_update.ecpp"

  sp.commit();
}
catch(const vagra::Exception& er_comm) {
  reply.out() << er_comm.what() << std::endl;
}
catch(const std::exception& er_comm) {
  log_error(er_comm.what());
}

  // <%include> inc/footer.ecpp
  reply.out() << data[53]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[54]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[55]; //    </div>\n </body>\n</html>\n
  // </%include>
  // <%/cpp>
  return HTTP_OK;
}

} // namespace
