all: source test

include source/makefile
include test/makefile

build:
	mkdir "$@"