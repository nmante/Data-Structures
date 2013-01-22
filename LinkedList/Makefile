CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/

all: LinkedList.o LinkedList.so

LinkedList.so: $(INC_DIR)LinkedList.hpp $(SOURCE)LinkedList.cpp
	$(CC) -shared -o liblinkedlist.so -L$(LINK_DIR) -lnode LinkedList.o
	rm LinkedList.o
	mv liblinkedlist.so bin


LinkedList.o:
	$(CC) $(INC_FLAGS) -c -g -fPIC $(SOURCE)LinkedList.cpp

clean:
	rm bin/liblinkedlist.so