CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/

all: BinarySearch.o BinarySearch.so BinarySearch.a

BinarySearch.a: BinarySearch.o
	ar rvs libbinarysearch.a BinarySearch.o
	mv libbinarysearch.a bin


BinarySearch.so: $(INC_DIR)*.hpp $(SOURCE)*.cpp
	$(CC) -shared -o libbinarysearch.so -L$(LINK_DIR) -lnode BinarySearch.o
	mv libbinarysearch.so bin

BinarySearch.o: $(INC_DIR)*.hpp $(SOURCE)BinarySearch.cpp
	$(CC) $(INC_FLAGS) -c -g -fPIC $(SOURCE)BinarySearch.cpp

# BinaryNode.o: $(INC_DIR)BinaryNode.hpp $(SOURCE)BinaryNode.cpp
# 	$(CC) $(INC_FLAGS) -c -fPIC -L$(LINK_DIR) -lnode $(SOURCE)BinaryNode.cpp	

clean:
	rm bin/libbinarysearch.*
	rm *.o