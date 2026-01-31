source_2015_Day_01: build/source/executable/2015/Day_01/Part_1.exe build/source/executable/2015/Day_01/Part_2.exe

build/source/executable/2015/Day_01/Part_1.exe: build/source/object/file.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/source/object/2015/Day_01/Part_1.o $\
												| build/source/executable/2015/Day_01
	gcc build/source/object/file.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/source/object/2015/Day_01/Part_1.o -o "build/source/executable/2015/Day_01/Part_1.exe"

build/source/executable/2015/Day_01/Part_2.exe: build/source/object/file.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/source/object/2015/Day_01/Part_2.o $\
												| build/source/executable/2015/Day_01
	gcc build/source/object/file.o build/source/object/2015/Day_01/Not_Quite_Lisp.o build/source/object/2015/Day_01/Part_2.o -o "build/source/executable/2015/Day_01/Part_2.exe"

build/source/object/2015/Day_01/Part_1.o: source/2015/Day_01/Part_1.c $\
										  source/file.h source/2015/Day_01/Not_Quite_Lisp.h $\
										  | build/source/object/2015/Day_01
	gcc -c "source/2015/Day_01/Part_1.c" -o "build/source/object/2015/Day_01/Part_1.o"

build/source/object/2015/Day_01/Part_2.o: source/2015/Day_01/Part_2.c $\
										  source/file.h source/2015/Day_01/Not_Quite_Lisp.h $\
										  | build/source/object/2015/Day_01
	gcc -c "source/2015/Day_01/Part_2.c" -o "build/source/object/2015/Day_01/Part_2.o"

build/source/object/2015/Day_01/Not_Quite_Lisp.o: source/2015/Day_01/Not_Quite_Lisp.c $\
												  | build/source/object/2015/Day_01
	gcc -c "source/2015/Day_01/Not_Quite_Lisp.c" -o "build/source/object/2015/Day_01/Not_Quite_Lisp.o"

build/source/executable/2015/Day_01: | build/source/executable/2015
	mkdir "$@"

build/source/object/2015/Day_01: | build/source/object/2015
	mkdir "$@"