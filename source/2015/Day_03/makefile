source_2015_Day_03: build/source/executable/2015/Day_03/Part_1.exe build/source/executable/2015/Day_03/Part_2.exe

build/source/executable/2015/Day_03/Part_1.exe: build/source/object/file.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/source/object/2015/Day_03/Part_1.o $\
												| build/source/executable/2015/Day_03
	gcc build/source/object/file.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/source/object/2015/Day_03/Part_1.o -o "build/source/executable/2015/Day_03/Part_1.exe"

build/source/executable/2015/Day_03/Part_2.exe: build/source/object/file.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/source/object/2015/Day_03/Part_2.o $\
												| build/source/executable/2015/Day_03
	gcc build/source/object/file.o build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o build/source/object/2015/Day_03/Part_2.o -o "build/source/executable/2015/Day_03/Part_2.exe"

build/source/object/2015/Day_03/Part_1.o: source/2015/Day_03/Part_1.c $\
										  source/file.h source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.h $\
										  | build/source/object/2015/Day_03
	gcc -c "source/2015/Day_03/Part_1.c" -o "build/source/object/2015/Day_03/Part_1.o"

build/source/object/2015/Day_03/Part_2.o: source/2015/Day_03/Part_2.c $\
										  source/file.h source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.h $\
										  | build/source/object/2015/Day_03
	gcc -c "source/2015/Day_03/Part_2.c" -o "build/source/object/2015/Day_03/Part_2.o"

build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o: source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.c $\
																		  source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.h $\
																		  | build/source/object/2015/Day_03
	gcc -c "source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.c" -o "build/source/object/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.o"

build/source/executable/2015/Day_03: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_03: | build/source/object/2015
	mkdir "$@"