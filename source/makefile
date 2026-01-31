source: source_2015

include source/2015/makefile

build/source/object/file.o: source/file.c | build/source/object
	gcc -c "source/file.c" -o "build/source/object/file.o"

build/source/object/math.o: source/math.c | build/source/object
	gcc -c source/math.c -o build/source/object/math.o

build/source/executable: | build/source
	mkdir "$@"

build/source/object: | build/source
	mkdir "$@"

build/source: | build
	mkdir "$@"