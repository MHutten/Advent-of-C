test_tests_2015_Day_08: build/test/executable/2015/Day_08/Matchsticks_test.exe

build/test/executable/2015/Day_08/Matchsticks_test.exe: build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_08/Matchsticks.o build/test/object/tests/2015/Day_08/Matchsticks_test.o $\
														| build/test/executable/2015/Day_08
	gcc build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_08/Matchsticks.o build/test/object/tests/2015/Day_08/Matchsticks_test.o -o build/test/executable/2015/Day_08/Matchsticks_test.exe

build/test/object/tests/2015/Day_08/Matchsticks_test.o: test/tests/2015/Day_08/Matchsticks_test.c $\
														test/asserts.h test/suite.h source/2015/Day_08/Matchsticks.h $\
														| build/test/object/tests/2015/Day_08
	gcc -c test/tests/2015/Day_08/Matchsticks_test.c -o build/test/object/tests/2015/Day_08/Matchsticks_test.o

build/test/executable/2015/Day_08: | build/test/executable/2015
	mkdir "$@"

build/test/object/tests/2015/Day_08: | build/test/object/tests/2015
	mkdir "$@"