CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/

all: Queue.o Queue.so

Queue.so: $(INC_DIR)Queue.hpp $(SOURCE)Queue.cpp
	$(CC) -shared -o libqueue.so Queue.o
	rm Queue.o
	mv libqueue.so bin




Queue.o:
	$(CC) $(INC_FLAGS) -c -g -fPIC -L$(LINK_DIR) -lnode $(SOURCE)Queue.cpp

clean:
	rm bin/libqueue.so