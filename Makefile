include Makefile.inc

all: tnt/libvagra.so tnt/vablo.so

SUBDIRS = vagra ecpp
.PHONY: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

tnt/libvagra.so: vagra
	[ -f tnt/libvagra.so ] && rm  -f tnt/libvagra.so || true
	cp vagra/libvagra.so tnt/

tnt/vablo.so: ecpp
	[ -f tnt/vablo.so ] && rm  -f tnt/vablo.so || true
	cp ecpp/vablo.so tnt/

clean:
	rm -f tnt/*.so
	cd vagra && $(MAKE) clean
	cd ecpp && $(MAKE) clean
