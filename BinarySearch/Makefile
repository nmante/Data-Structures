CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/

all: BinarySearch.o BinarySearch.so

BinarySearch.so: $(INC_DIR)*.hpp $(SOURCE)*.cpp
	$(CC) -shared -o libbinarysearch.so BinarySearch.o
	rm *.o
	mv libbinarysearch.so bin

BinarySearch.o: $(INC_DIR)*.hpp $(SOURCE)BinarySearch.cpp
	$(CC) $(INC_FLAGS) -c -g -fPIC -L$(LINK_DIR) -lnode $(SOURCE)BinarySearch.cpp

# BinaryNode.o: $(INC_DIR)BinaryNode.hpp $(SOURCE)BinaryNode.cpp
# 	$(CC) $(INC_FLAGS) -c -fPIC -L$(LINK_DIR) -lnode $(SOURCE)BinaryNode.cpp	

clean:
	rm bin/libbinarysearch.so