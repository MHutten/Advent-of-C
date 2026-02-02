source_2015_Day_11: build/source/executable/2015/Day_11/Part_1.exe build/source/executable/2015/Day_11/Part_2.exe

build/source/executable/2015/Day_11/Part_1.exe: build/source/object/2015/Day_11/Corporate_Policy.o build/source/object/2015/Day_11/Part_1.o $\
												| build/source/executable/2015/Day_11
	gcc build/source/object/2015/Day_11/Corporate_Policy.o build/source/object/2015/Day_11/Part_1.o -o "build/source/executable/2015/Day_11/Part_1.exe"

build/source/executable/2015/Day_11/Part_2.exe: build/source/object/2015/Day_11/Corporate_Policy.o build/source/object/2015/Day_11/Part_2.o $\
												| build/source/executable/2015/Day_11
	gcc build/source/object/2015/Day_11/Corporate_Policy.o build/source/object/2015/Day_11/Part_2.o -o "build/source/executable/2015/Day_11/Part_2.exe"

build/source/object/2015/Day_11/Part_1.o: source/2015/Day_11/Part_1.c $\
										  source/file.h source/2015/Day_11/Corporate_Policy.h $\
										  | build/source/object/2015/Day_11
	gcc -c "source/2015/Day_11/Part_1.c" -o "build/source/object/2015/Day_11/Part_1.o"

build/source/object/2015/Day_11/Part_2.o: source/2015/Day_11/Part_2.c $\
										  source/file.h source/2015/Day_11/Corporate_Policy.h $\
										  | build/source/object/2015/Day_11
	gcc -c "source/2015/Day_11/Part_2.c" -o "build/source/object/2015/Day_11/Part_2.o"

build/source/object/2015/Day_11/Corporate_Policy.o: source/2015/Day_11/Corporate_Policy.c $\
											   		| build/source/object/2015/Day_11
	gcc -c "source/2015/Day_11/Corporate_Policy.c" -o "build/source/object/2015/Day_11/Corporate_Policy.o"

build/source/executable/2015/Day_11: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_11: | build/source/object/2015
	mkdir "$@"