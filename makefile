SOURCES := $(wildcard src/*.cpp) $(wildcard src/**/*.cpp) 

all:
	g++ ${SOURCES} -o StoreCRUD.exe
	StoreCRUD.exe