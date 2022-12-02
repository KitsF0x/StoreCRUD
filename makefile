SOURCES := $(wildcard src/*.cpp) $(wildcard src/**/*.cpp) 

all:
	g++ ${SOURCES} -o StoreCRUD.exe -Ilib/include -Llib/bin -lwxmsw32u_core -lwxbase32u
	StoreCRUD.exe