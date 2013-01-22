CC=g++
INC_DIR=include/
SOURCE=src/

all: Node.o Node.so

Node.a:
	ar rcs libnode.a Node.o 
	mv Node.o bin
	mv libnode.a bin

Node.so: $(INC_DIR)Node.hpp $(SOURCE)Node.cpp
	$(CC) -shared -o libnode.so Node.o
	mv Node.o bin
	mv libnode.so bin


Node.o: $(INC_DIR)Node.hpp $(SOURCE)Node.cpp
	$(CC) -I$(INC_DIR) -c -g -fPIC $(SOURCE)Node.cpp

clean:
	rm bin/libnode.so
	rm bin/libnode.a
