makefile:
DEL_LIST = *.o *.exe *stackdump

all: project_ueb_01
	doxygen doxyfile
	g++ -o ueb01 *.o
clean:
	rm -f $(DEL_LIST)
build: project_ueb_01
	g++ -o ueb01 *.o
doc: 
	doxygen doxyfile
rebuild: clean all
project_ueb_01: 
	g++ -c -Wall -pedantic *.cpp
