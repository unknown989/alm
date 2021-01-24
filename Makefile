alm: alm        
        g++ -o alm alm.cpp

PREFIX = /usr/local
.PHONY: install
install: alm
        mkdir -p $(PREFIX)/bin        
        cp $< $(PREFIX)/bin/alm

.PHONY: uninstall
uninstall:
        rm -f $(PREFIX)/bin/alm
