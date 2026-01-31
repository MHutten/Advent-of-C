source_2015_Day_02: build/source/executable/2015/Day_02/Part_1.exe build/source/executable/2015/Day_02/Part_2.exe

build/source/executable/2015/Day_02/Part_1.exe: build/source/object/file.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/source/object/2015/Day_02/Part_1.o $\
												| build/source/executable/2015/Day_02
	gcc build/source/object/file.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/source/object/2015/Day_02/Part_1.o -o "build/source/executable/2015/Day_02/Part_1.exe"

build/source/executable/2015/Day_02/Part_2.exe: build/source/object/file.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/source/object/2015/Day_02/Part_2.o $\
												| build/source/executable/2015/Day_02
	gcc build/source/object/file.o build/source/object/math.o build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o build/source/object/2015/Day_02/Part_2.o -o "build/source/executable/2015/Day_02/Part_2.exe"

build/source/object/2015/Day_02/Part_1.o: source/2015/Day_02/Part_1.c $\
										  source/file.h source/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.h $\
										  | build/source/object/2015/Day_02
	gcc -c "source/2015/Day_02/Part_1.c" -o "build/source/object/2015/Day_02/Part_1.o"

build/source/object/2015/Day_02/Part_2.o: source/2015/Day_02/Part_2.c $\
										  source/file.h source/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.h $\
										  | build/source/object/2015/Day_02
	gcc -c "source/2015/Day_02/Part_2.c" -o "build/source/object/2015/Day_02/Part_2.o"

build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o: source/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.c $\
																	 source/math.h $\
																	 | build/source/object/2015/Day_02
	gcc -c "source/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.c" -o "build/source/object/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.o"

build/source/executable/2015/Day_02: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_02: | build/source/object/2015
	mkdir "$@"