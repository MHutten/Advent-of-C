test: test_tests

include test/tests/makefile

build/test/object/asserts.o: test/asserts.c $\
							 | build/test/object
	gcc -c test/asserts.c -o build/test/object/asserts.o

build/test/object/suite.o: test/suite.c $\
						   | build/test/object
	gcc -c test/suite.c -o build/test/object/suite.o

build/test/executable: | build/test
	mkdir "$@"

build/test/object: | build/test
	mkdir "$@"

build/test: | build
	mkdir "$@"