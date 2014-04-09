CFILES=anmalloc_bindings.c test_basic.c

all: ../build build
	for file in $(CFILES); do \
		gcc -c -Iinclude -I../include $$file -o build/`basename $$file .c`.o; \
	done

../build:
	cd .. && $(MAKE) CFLAGS=-Itest/include

build:
	mkdir build

clean:
	rm -rf build/
	cd ../ && $(MAKE) clean
