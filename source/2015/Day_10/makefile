source_2015_Day_10: build/source/executable/2015/Day_10/Part_1.exe build/source/executable/2015/Day_10/Part_2.exe

build/source/executable/2015/Day_10/Part_1.exe: build/source/object/2015/Day_10/Elves_Look_Elves_Say.o build/source/object/2015/Day_10/Part_1.o $\
												| build/source/executable/2015/Day_10
	gcc build/source/object/2015/Day_10/Elves_Look_Elves_Say.o build/source/object/2015/Day_10/Part_1.o -o "build/source/executable/2015/Day_10/Part_1.exe"

build/source/executable/2015/Day_10/Part_2.exe: build/source/object/2015/Day_10/Elves_Look_Elves_Say.o build/source/object/2015/Day_10/Part_2.o $\
												| build/source/executable/2015/Day_10
	gcc build/source/object/2015/Day_10/Elves_Look_Elves_Say.o build/source/object/2015/Day_10/Part_2.o -o "build/source/executable/2015/Day_10/Part_2.exe"

build/source/object/2015/Day_10/Part_1.o: source/2015/Day_10/Part_1.c $\
										  source/2015/Day_10/Elves_Look_Elves_Say.h $\
										  | build/source/object/2015/Day_10
	gcc -c "source/2015/Day_10/Part_1.c" -o "build/source/object/2015/Day_10/Part_1.o"

build/source/object/2015/Day_10/Part_2.o: source/2015/Day_10/Part_2.c $\
										  source/2015/Day_10/Elves_Look_Elves_Say.h $\
										  | build/source/object/2015/Day_10
	gcc -c "source/2015/Day_10/Part_2.c" -o "build/source/object/2015/Day_10/Part_2.o"

build/source/object/2015/Day_10/Elves_Look_Elves_Say.o: source/2015/Day_10/Elves_Look_Elves_Say.c $\
											   			| build/source/object/2015/Day_10
	gcc -c "source/2015/Day_10/Elves_Look_Elves_Say.c" -o "build/source/object/2015/Day_10/Elves_Look_Elves_Say.o"

build/source/executable/2015/Day_10: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_10: | build/source/object/2015
	mkdir "$@"