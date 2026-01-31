test_tests_2015_Day_01: build/test/executable/2015/Day_01/Not_Quite_Lisp_test.exe

build/test/executable/2015/Day_01/Not_Quite_Lisp_test.exe: build/test/object/asserts.o build/test/object/suite.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/test/object/tests/2015/Day_01/Not_Quite_Lisp_test.o $\
														   | build/test/executable/2015/Day_01
	gcc build/test/object/asserts.o build/test/object/suite.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/test/object/tests/2015/Day_01/Not_Quite_Lisp_test.o -o build/test/executable/2015/Day_01/Not_Quite_Lisp_test.exe

build/test/object/tests/2015/Day_01/Not_Quite_Lisp_test.o: test/tests/2015/Day_01/Not_Quite_Lisp_test.c $\
														   test/asserts.h test/suite.h source/2015/Day_01/Not_Quite_Lisp.h $\
														   | build/test/object/tests/2015/Day_01
	gcc -c test/tests/2015/Day_01/Not_Quite_Lisp_test.c -o build/test/object/tests/2015/Day_01/Not_Quite_Lisp_test.o

build/test/executable/2015/Day_01: | build/test/executable/2015
	mkdir "$@"

build/test/object/tests/2015/Day_01: | build/test/object/tests/2015
	mkdir "$@"