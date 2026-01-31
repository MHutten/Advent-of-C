source_2015_Day_08: build/source/executable/2015/Day_08/Part_1.exe build/source/executable/2015/Day_08/Part_2.exe

build/source/executable/2015/Day_08/Part_1.exe: build/source/object/file.o build/source/object/2015/Day_08/Matchsticks.o build/source/object/2015/Day_08/Part_1.o $\
												| build/source/executable/2015/Day_08
	gcc build/source/object/file.o build/source/object/2015/Day_08/Matchsticks.o build/source/object/2015/Day_08/Part_1.o -o "build/source/executable/2015/Day_08/Part_1.exe"

build/source/executable/2015/Day_08/Part_2.exe: build/source/object/file.o build/source/object/2015/Day_08/Matchsticks.o build/source/object/2015/Day_08/Part_2.o $\
												| build/source/executable/2015/Day_08
	gcc build/source/object/file.o build/source/object/2015/Day_08/Matchsticks.o build/source/object/2015/Day_08/Part_2.o -o "build/source/executable/2015/Day_08/Part_2.exe"

build/source/object/2015/Day_08/Part_1.o: source/2015/Day_08/Part_1.c $\
										  source/file.h source/2015/Day_08/Matchsticks.h $\
										  | build/source/object/2015/Day_08
	gcc -c "source/2015/Day_08/Part_1.c" -o "build/source/object/2015/Day_08/Part_1.o"

build/source/object/2015/Day_08/Part_2.o: source/2015/Day_08/Part_2.c $\
										  source/file.h source/2015/Day_08/Matchsticks.h $\
										  | build/source/object/2015/Day_08
	gcc -c "source/2015/Day_08/Part_2.c" -o "build/source/object/2015/Day_08/Part_2.o"

build/source/object/2015/Day_08/Matchsticks.o: source/2015/Day_08/Matchsticks.c $\
											   | build/source/object/2015/Day_08
	gcc -c "source/2015/Day_08/Matchsticks.c" -o "build/source/object/2015/Day_08/Matchsticks.o"

build/source/executable/2015/Day_08: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_08: | build/source/object/2015
	mkdir "$@"