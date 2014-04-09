CFILES=src/anmalloc.c

all:
	for file in $(CFILES); do \
		gcc -c $(CFLAGS) $$file -o build/`basename $$file .c`.o; \
	done

build:
	mkdir build

clean:
	rm -rf build/

