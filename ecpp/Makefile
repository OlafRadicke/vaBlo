include ../Makefile.inc

all: vablo.so

OBJECTS  = index.o article.o categories.o feed_atom.o
OBJECTS += comments.o comment.o comment_commit.o comment_reply.o
OBJECTS += article_new.o article_preview.o article_commit.o article_update.o
OBJECTS += admin.o admin_comments.o comment_update.o comment_update_commit.o
OBJECTS += user_list.o user_update.o user_new.o user_preview.o user_commit.o
OBJECTS += passwd_update.o passwd_commit.o login.o logout.o 
OBJECTS += context_list.o context_update.o context_preview.o context_commit.o context_new.o
OBJECTS += error.o expire.o redirect_301.o

vablo.so: ${OBJECTS}
	${CXX} -o $@ $^ ${LDFLAGS} -L../vagra -Ltnt -lvagra -ltntnet

.SUFFIXES: .ecpp .gif .jpg .css .js .cpp .ico
ECPPC=env ${EXTRA_ENV} ecppc
TNTNET=env ${EXTRA_ENV} tntnet
CXXFLAGS  = -I../vagra/include $(VAGRA_CXXFLAGS)

.ecpp.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_CPP} $<
.gif.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_GIF} -b $<
.jpg.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_JPG} -b $<
.png.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_PNG} -b $<
.ico.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_ICO} -b $<
.css.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_CSS} -b $<
.js.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_JS} -b $<
.cpp.o:
	${CXX} ${CPPFLAGS} ${CXXFLAGS} -c $<

clean:
	rm -f *.so *.o
