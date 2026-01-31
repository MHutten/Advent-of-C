test_tests_2015_Day_06: build/test/executable/2015/Day_06/Probably_a_Fire_Hazard_test.exe

build/test/executable/2015/Day_06/Probably_a_Fire_Hazard_test.exe: build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/test/object/tests/2015/Day_06/Probably_a_Fire_Hazard_test.o $\
																   | build/test/executable/2015/Day_06
	gcc build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/test/object/tests/2015/Day_06/Probably_a_Fire_Hazard_test.o -o build/test/executable/2015/Day_06/Probably_a_Fire_Hazard_test.exe

build/test/object/tests/2015/Day_06/Probably_a_Fire_Hazard_test.o: test/tests/2015/Day_06/Probably_a_Fire_Hazard_test.c $\
																   test/asserts.h test/suite.h source/2015/Day_06/Probably_a_Fire_Hazard.h $\
																   | build/test/object/tests/2015/Day_06
	gcc -c test/tests/2015/Day_06/Probably_a_Fire_Hazard_test.c -o build/test/object/tests/2015/Day_06/Probably_a_Fire_Hazard_test.o

build/test/executable/2015/Day_06: | build/test/executable/2015
	mkdir "$@"

build/test/object/tests/2015/Day_06: | build/test/object/tests/2015
	mkdir "$@"