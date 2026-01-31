source_2015_Day_05: build/source/executable/2015/Day_05/Part_1.exe build/source/executable/2015/Day_05/Part_2.exe

build/source/executable/2015/Day_05/Part_1.exe: build/source/object/file.o build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o build/source/object/2015/Day_05/Part_1.o $\
												| build/source/executable/2015/Day_05
	gcc build/source/object/file.o build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o build/source/object/2015/Day_05/Part_1.o -o "build/source/executable/2015/Day_05/Part_1.exe"

build/source/executable/2015/Day_05/Part_2.exe: build/source/object/file.o build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o build/source/object/2015/Day_05/Part_2.o $\
												| build/source/executable/2015/Day_05
	gcc build/source/object/file.o build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o build/source/object/2015/Day_05/Part_2.o -o "build/source/executable/2015/Day_05/Part_2.exe"

build/source/object/2015/Day_05/Part_1.o: source/2015/Day_05/Part_1.c $\
										  source/file.h source/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.h $\
										  | build/source/object/2015/Day_05
	gcc -c "source/2015/Day_05/Part_1.c" -o "build/source/object/2015/Day_05/Part_1.o"

build/source/object/2015/Day_05/Part_2.o: source/2015/Day_05/Part_2.c $\
										  source/file.h source/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.h $\
										  | build/source/object/2015/Day_05
	gcc -c "source/2015/Day_05/Part_2.c" -o "build/source/object/2015/Day_05/Part_2.o"

build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o: source/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.c $\
																		| build/source/object/2015/Day_05
	gcc -c "source/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.c" -o "build/source/object/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.o"

build/source/executable/2015/Day_05: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_05: | build/source/object/2015
	mkdir "$@"