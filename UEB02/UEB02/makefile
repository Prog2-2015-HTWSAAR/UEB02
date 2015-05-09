makefile:
DEL_LIST = *.o *.exe *stackdump

all: project_ueb_02 doc
	g++ -o ueb02 *.o
clean:
	rm -f $(DEL_LIST)
build: project_ueb_02
	g++ -o ueb02 *.o
doc: 
	doxygen doxyfile
rebuild: clean all
project_ueb_02: 
	g++ -c -Wall -pedantic *.cpp
