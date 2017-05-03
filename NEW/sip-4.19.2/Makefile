
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages || mkdir -p $(DESTDIR)/home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages
	cp -f sipconfig.py $(DESTDIR)/home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/sipconfig.py
	cp -f /home/thais/Faculdade/TCC/NEW/sip-4.19.2/sipdistutils.py $(DESTDIR)/home/thais/Faculdade/TCC/NEW/pyenv/lib/python2.7/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
