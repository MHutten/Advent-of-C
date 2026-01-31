test_tests_2015_Day_02: build/test/executable/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.exe

build/test/executable/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.exe: build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/test/object/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.o $\
																			  | build/test/executable/2015/Day_02
	gcc build/test/object/asserts.o build/test/object/suite.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/test/object/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.o -o build/test/executable/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.exe

build/test/object/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.o: test/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.c $\
																			  test/asserts.h test/suite.h source/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.h $\
																			  | build/test/object/tests/2015/Day_02
	gcc -c test/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.c -o build/test/object/tests/2015/Day_02/I_Was_Told_There_Would_Be_No_Math_test.o

build/test/executable/2015/Day_02: | build/test/executable/2015
	mkdir "$@"

build/test/object/tests/2015/Day_02: | build/test/object/tests/2015
	mkdir "$@"