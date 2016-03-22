CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/
BIN_DIR=/home/nii/Desktop/DataStructures/Stack/bin
#-L$(LINK_DIR) -lnode
#$(CC) -shared -o libstack.so Stack.o $(LINK_DIR)Node.o

all: Stack.o Stack.so Stack.a

Stack.a: Stack.o
	ar rvs libstack.a Stack.o
	mv libstack.a bin

Stack.so: $(INC_DIR)Stack.hpp $(SOURCE)Stack.cpp
	$(CC) -shared -o libstack.so -L$(LINK_DIR) -lnode Stack.o
	mv libstack.so bin
	# ln -sf $(CURDIR)/libstack.so.1.0 bin/libstack.so.1
	# ln -sf $(CURDIR)/libstack.so.1.0 bin/libstack.so

Stack.o: $(INC_DIR)Stack.hpp ../Node/include/Node.hpp $(SOURCE)Stack.cpp
	$(CC) $(INC_FLAGS) -g -c -fPIC $(SOURCE)Stack.cpp 

clean:
	rm bin/*
	rm *.o