////////////////////////////////////////////////////////////////////////
// error.cpp
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

log_define("component.error")

// <%pre>
#line 28 "error.ecpp"

  #include <tnt/savepoint.h>

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

static tnt::ComponentFactoryImpl<_component_> Factory("error");

static const char* rawData = "H\000\000\000N\001\000\000P\002\000\000e\002\000\000y\002\000\000\320\002\000\000\355\002"
  "\000\000\357\002\000\000\360\002\000\000\370\002\000\0004\003\000\000J\003\000\000\227\003\000\000\337\003\000\000"
  "\365\003\000\000 \004\000\000\242\004\000\000\275\004\000\000<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN"
  "\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en"
  "\">\n  <head>\n    <meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />\n    <title></title>\n  "
  "  <link href=\"/static/vablo.css\" rel=\"stylesheet\" type=\"text/css\" />\n    <link href=\"/feed/atom\" type=\"appl"
  "ication/atom+xml\" rel=\"alternate\" title=\"Atom feed\" />\n  </head>\n  <body>\n\n  <div id=\"background\">\n    <d"
  "iv id=\"head\">\n\t    <h1><a href=\"/\"></a></h1>\n    </div>\n    <div id=\"tags\">\n      <dl class=\"tags\">\n   "
  "     <dt>\n          categories\n        </dt>\n        <dd>\n          <a href=\"/categories/\">()</a>\n          </"
  "dd>\n      </dl>\n    </div>\n    <div id=\"content\">\n<p>Page not found</p>\n<p>You need to enable session cookies "
  "to use all functions of this site.</p>\n<p>You need to <a href=\"/admin/login\">login</a> to view this page.</p> \n<p"
  ">Page not found</p>\n     </div>\n   </div>\n   <div id=\"footer\">\n     <p>Served by <a href=\"http://www.tntnet.or"
  "g/\">tntnet</a> using <a href=\"http://www.vtoc.de/projects/vablo\">vaBlo 0.6</a></p>\n   </div>\n </body>\n</html>\n";

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
  log_trace("error " << qparam.getUrl());

  tnt::DataChunks data(rawData);

  // <%cpp>
#line 31 "error.ecpp"

  int err_state = 0;
  std::string title("error");

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
#line 38 "error.ecpp"

  try {
    tnt::Savepoint sp(reply);
    std::string err_url(request.getPathInfo());
    if(err_url == "404") {

  // <%include> inc/error_404.ecpp
#line 28 "inc/error_404.ecpp"
 err_state = 404;

  reply.out() << data[10]; // <p>Page not found</p>\n
  // </%include>
#line 47 "error.ecpp"
    } else if (err_url == "nocookie") {

  // <%include> inc/error_nocookie.ecpp
  reply.out() << data[11]; // <p>You need to enable session cookies to use all functions of this site.</p>\n
  // </%include>
#line 51 "error.ecpp"
    } else if (err_url == "nologin") {

  // <%include> inc/error_nologin.ecpp
  reply.out() << data[12]; // <p>You need to <a href="/admin/login">login</a> to view this page.</p> \n
  // </%include>
#line 55 "error.ecpp"
    } else {

  // <%include> inc/error_404.ecpp
#line 28 "inc/error_404.ecpp"
 err_state = 404;

  reply.out() << data[13]; // <p>Page not found</p>\n
  // </%include>
#line 59 "error.ecpp"

    }
    sp.commit();
  }
  catch(...) {
    reply.out() << "Unkown Error" << std::endl;
  }

  // <%include> inc/footer.ecpp
  reply.out() << data[14]; //      </div>\n   </div>\n   <div id="footer">\n
  // <%include> inc/custom_footer.ecpp
  reply.out() << data[15]; //      <p>Served by <a href="http://www.tntnet.org/">tntnet</a> using <a href="http://www.vtoc.de/projects/vablo">vaBlo 0.6</a></p>\n
  // </%include>
  reply.out() << data[16]; //    </div>\n </body>\n</html>\n
  // </%include>
#line 70 "error.ecpp"

  if(err_state == 404)
	return(HTTP_NOT_FOUND);

  // <%/cpp>
  return HTTP_OK;
}

} // namespace
