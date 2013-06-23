////////////////////////////////////////////////////////////////////////
// comment_reply.cpp
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

log_define("component.comment_reply")

// <%pre>
#line 28 "comment_reply.ecpp"

  #include <tnt/savepoint.h>

  #include <vagra/article/cachedarticle.h>
  #include <vagra/comment/cachedcomment.h>
  #include <vagra/exception.h>
  #include <vagra/utils.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("comment_reply");

static const char* rawData = "\324\000\000\000\332\001\000\000\334\002\000\000\361\002\000\000\005\003\000\000\134\003"
  "\000\000y\003\000\000{\003\000\000|\003\000\000\204\003\000\000\300\003\000\000\352\003\000\000\354\003\000\000\366"
  "\003\000\000\033\004\000\000\"\004\000\000)\004\000\000*\004\000\0000\004\000\0001\004\000\000I\004\000\000K\004\000"
  "\000P\004\000\000u\004\000\000\200\004\000\000\216\004\000\000\231\004\000\000\242\004\000\000\276\004\000\000\013"
  "\005\000\000\020\005\000\000 \005\000\000\"\005\000\000'\005\000\0005\005\000\0006\005\000\000\207\005\000\000\261"
  "\005\000\000\307\005\000\000\337\005\000\000\025\006\000\000\?\006\000\000\246\006\000\000\336\006\000\000\025\007"
  "\000\000}\007\000\000\032\010\000\000\201\010\000\000\342\010\000\000S\t\000\000~\t\000\000\000\n\000\000\033\n\000"
  "\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">"
  "\n<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\">\n  <head>\n    <meta http-equiv=\"Content-Type\" cont"
  "ent=\"text/html; charset=utf-8\" />\n    <title></title>\n    <link href=\"/static/vablo.css\" rel=\"stylesheet\" typ"
  "e=\"text/css\" />\n    <link href=\"/feed/atom\" type=\"application/atom+xml\" rel=\"alternate\" title=\"Atom feed\" "
  "/>\n  </head>\n  <body>\n\n  <div id=\"background\">\n    <div id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    <"
  "/div>\n    <div id=\"tags\">\n      <dl class=\"tags\">\n        <dt>\n          categories\n        </dt>\n        <"
  "dd>\n          <a href=\"/categories/\">()</a>\n          </dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n "
  " <div class=\"article\">\n    <h3><a href=\"/\"></a></h3>\n    <div class=\"article_info\">\n      \n      \n      \n"
  "      \n\t  <a href=\"/categories/\"></a>\n      | There are <a href=\"/comments/#comments\"> Comments</a>\n    </div"
  ">\n  </div>\n  <h4>Reply on comment</h4>\n        <div class=\"comment\">\n          <p class=\"comment_info\">\n    "
  "         by \n\t      <a href=\"\"></a>\n              \n          </p>\n          <p class=\"comment_reply\">\n     "
  "       <a href=\"/comment/\">Reply</a>\n          </p>\n          <pre></pre>\n        </div>\n  <h4>Write answer</h4"
  ">\n  <form action=\"/admin/comment/update\" method=\"post\">\n  <form action=\"/comment/\" method=\"post\">\n    <fie"
  "ldset>\n      <legend>Submit comment</legend>\n      <input type=\"hidden\" name=\"i_art_id\" value=\"\" />\n      <i"
  "nput type=\"hidden\" name=\"i_comm_id\" value=\"\" />\n      <input type=\"hidden\" name=\"i_ref_id\" value=\"\" />\n"
  "      <label for=\"fl_name\">Your Name</label>\n\t<input type=\"text\" name=\"i_name\" id=\"fl_name\" value=\"\" />\n"
  "      <label for=\"fl_mail\">eMail Address<span class=\"desc\">(will not be published)</span></label>\n\t<input type="
  "\"text\" name=\"i_mail\" id=\"fl_mail\" value=\"\" />\n      <label for=\"fl_home\">Homepage</label>\n\t<input type="
  "\"text\" name=\"i_home\" id=\"fl_home\" value=\"\" />\n      <label for=\"fl_comment\">Comment text</label>\n\t<texta"
  "rea name=\"i_text\" id=\"fl_comment\"></textarea>\n      <div class=\"fl_submit\"><input type=\"submit\" value=\"Prev"
  "iew\" /></div>\n    </fieldset>\n  </form>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href"
  "=\"http://www.tntnet.org/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </di"
  "v>\n </body>\n</html>\n";

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
  log_trace("comment_reply " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%cpp>
#line 36 "comment_reply.ecpp"

  std::string title("Comment preview");

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
#line 42 "comment_reply.ecpp"

try {
  std::string i_name;
  std::string i_mail;
  std::string i_home("http://");
  std::string i_text;
  unsigned int i_art_id = 0;
  unsigned int i_ref_id = vagra::str2unsigned(request.getPathInfo());
  unsigned int i_comm_id = 0;

  tnt::Savepoint sp(reply);
  vagra::CachedComment comment(i_ref_id);
  vagra::CachedArticle article(comment->getArticle());
  i_art_id = article->getId();

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
#line 60 "comment_reply.ecpp"
 if(article->getCommentsAllow()) {

  reply.out() << data[27]; //   <h4>Reply on comment</h4>\n
  // <%include> inc/comment.ecpp
  reply.out() << data[28]; //         <div class="comment">\n          <p class="comment_info">\n            
#line 30 "inc/comment.ecpp"
  reply.sout() << ( vagra::date2str(comment->getCTime()) );
  reply.out() << data[29]; //  by \n
#line 31 "inc/comment.ecpp"
	    if(!comment->getHomepage().empty()) {

  reply.out() << data[30]; // \t      <a href="
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getHomepage() );
  reply.out() << data[31]; // ">
#line 32 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[32]; // </a>\n
#line 33 "inc/comment.ecpp"
	    } else {

  reply.out() << data[33]; //               
#line 34 "inc/comment.ecpp"
  reply.sout() << ( comment->getAuthor() );
  reply.out() << data[34]; // \n
#line 35 "inc/comment.ecpp"
	    }

  reply.out() << data[35]; //           </p>\n          <p class="comment_reply">\n            <a href="/comment/
#line 38 "inc/comment.ecpp"
  reply.sout() << ( comment->getId() );
  reply.out() << data[36]; // ">Reply</a>\n          </p>\n          <pre>
#line 40 "inc/comment.ecpp"
  reply.sout() << ( comment->getText() );
  reply.out() << data[37]; // </pre>\n        </div>\n
  // </%include>
  reply.out() << data[38]; //   <h4>Write answer</h4>\n
  // <%include> inc/comment_form.ecpp
#line 28 "inc/comment_form.ecpp"
if(i_comm_id) {

  reply.out() << data[39]; //   <form action="/admin/comment/update" method="post">\n
#line 30 "inc/comment_form.ecpp"
 } else {

  reply.out() << data[40]; //   <form action="/comment/" method="post">\n
#line 32 "inc/comment_form.ecpp"
 }

  reply.out() << data[41]; //     <fieldset>\n      <legend>Submit comment</legend>\n      <input type="hidden" name="i_art_id" value="
#line 35 "inc/comment_form.ecpp"
  reply.sout() << ( i_art_id );
  reply.out() << data[42]; // " />\n      <input type="hidden" name="i_comm_id" value="
#line 36 "inc/comment_form.ecpp"
  reply.sout() << ( i_comm_id );
  reply.out() << data[43]; // " />\n      <input type="hidden" name="i_ref_id" value="
#line 37 "inc/comment_form.ecpp"
  reply.sout() << ( i_ref_id );
  reply.out() << data[44]; // " />\n      <label for="fl_name">Your Name</label>\n\t<input type="text" name="i_name" id="fl_name" value="
#line 39 "inc/comment_form.ecpp"
  reply.sout() << ( i_name );
  reply.out() << data[45]; // " />\n      <label for="fl_mail">eMail Address<span class="desc">(will not be published)</span></label>\n\t<input type="text" name="i_mail" id="fl_mail" value="
#line 41 "inc/comment_form.ecpp"
  reply.sout() << ( i_mail );
  reply.out() << data[46]; // " />\n      <label for="fl_home">Homepage</label>\n\t<input type="text" name="i_home" id="fl_home" value="
#line 43 "inc/comment_form.ecpp"
  reply.sout() << ( i_home );
  reply.out() << data[47]; // " />\n      <label for="fl_comment">Comment text</label>\n\t<textarea name="i_text" id="fl_comment">
#line 45 "inc/comment_form.ecpp"
  reply.sout() << ( i_text );
  reply.out() << data[48]; // </textarea>\n      <div class="fl_submit"><input type="submit" value="Preview" /></div>\n    </fieldset>\n  </form>\n
  // </%include>
#line 69 "comment_reply.ecpp"

  }
  sp.commit();
}
catch(const vagra::Exception& er_comm) {
  reply.out() << er_comm.what() << std::endl;
}
catch(const std::exception& er_comm) {
  log_error(er_comm.what());
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
