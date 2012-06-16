include Makefile.inc

all: tnt/libvagra.so vablo.so

vablo: all

tnt/libvagra.so:
	cd vagra && $(MAKE)
	cp vagra/libvagra.so tnt/

OBJECTS  = index.o article.o categories.o feed_atom.o
OBJECTS += comments.o comment.o comment_commit.o comment_reply.o
OBJECTS += article_new.o article_preview.o article_commit.o article_update.o
OBJECTS += admin.o admin_comments.o comment_update.o comment_update_commit.o
OBJECTS += error.o expire.o login.o logout.o

vablo.so: ${OBJECTS}
	${CXX} -o $@ ${LDFLAGS} -Ltnt -lvagra -ltntnet $^
	[ -f tnt/vablo.so ] && rm tnt/vablo.so || true
	cp vablo.so tnt/

.SUFFIXES: .ecpp .gif .jpg .css .js .cpp .ico
EXTRA_ENV+="PATH=$$PATH:/opt/gsd/bin"
ECPPC=env ${EXTRA_ENV} ecppc
TNTNET=env ${EXTRA_ENV} tntnet
CXXFLAGS  = -Ivagra/include $(VAGRA_CXXFLAGS)

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
	rm -f *.so *.o tnt/*.so
	cd vagra && $(MAKE) clean
