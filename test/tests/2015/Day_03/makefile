test_tests_2015_Day_03: build/test/executable/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.exe

build/test/executable/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.exe: build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/test/object/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.o $\
																			  	   | build/test/executable/2015/Day_03
	gcc build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/test/object/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.o -o build/test/executable/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.exe

build/test/object/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.o: test/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.c $\
																			  	   test/asserts.h test/suite.h source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.h $\
																			  	   | build/test/object/tests/2015/Day_03
	gcc -c test/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.c -o build/test/object/tests/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum_test.o

build/test/executable/2015/Day_03: | build/test/executable/2015
	mkdir "$@"

build/test/object/tests/2015/Day_03: | build/test/object/tests/2015
	mkdir "$@"