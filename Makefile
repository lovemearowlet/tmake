PREFIX=/usr
CC=g++

make:
	$(CC) -o tmake main.cc


install: make
	cp tmake $(PREFIX)/bin

clean:
	rm -vf $(PREFIX)/bin/tmake tmake

