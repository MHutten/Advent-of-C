source_2015_Day_06: build/source/executable/2015/Day_06/Part_1.exe build/source/executable/2015/Day_06/Part_2.exe

build/source/executable/2015/Day_06/Part_1.exe: build/source/object/file.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/source/object/2015/Day_06/Part_1.o $\
												| build/source/executable/2015/Day_06
	gcc build/source/object/file.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/source/object/2015/Day_06/Part_1.o -o "build/source/executable/2015/Day_06/Part_1.exe"

build/source/executable/2015/Day_06/Part_2.exe: build/source/object/file.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/source/object/2015/Day_06/Part_2.o $\
												| build/source/executable/2015/Day_06
	gcc build/source/object/file.o build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o build/source/object/2015/Day_06/Part_2.o -o "build/source/executable/2015/Day_06/Part_2.exe"

build/source/object/2015/Day_06/Part_1.o: source/2015/Day_06/Part_1.c $\
										  source/file.h source/2015/Day_06/Probably_a_Fire_Hazard.h $\
										  | build/source/object/2015/Day_06
	gcc -c "source/2015/Day_06/Part_1.c" -o "build/source/object/2015/Day_06/Part_1.o"

build/source/object/2015/Day_06/Part_2.o: source/2015/Day_06/Part_2.c $\
										  source/file.h source/2015/Day_06/Probably_a_Fire_Hazard.h $\
										  | build/source/object/2015/Day_06
	gcc -c "source/2015/Day_06/Part_2.c" -o "build/source/object/2015/Day_06/Part_2.o"

build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o: source/2015/Day_06/Probably_a_Fire_Hazard.c $\
														  source/2015/Day_06/Probably_a_Fire_Hazard.h $\
														  | build/source/object/2015/Day_06
	gcc -c "source/2015/Day_06/Probably_a_Fire_Hazard.c" -o "build/source/object/2015/Day_06/Probably_a_Fire_Hazard.o"

build/source/executable/2015/Day_06: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_06: | build/source/object/2015
	mkdir "$@"