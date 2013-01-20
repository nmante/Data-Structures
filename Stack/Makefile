CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/
BIN_DIR=/home/nii/Desktop/DataStructures/Stack/bin
#-L$(LINK_DIR) -lnode
#$(CC) -shared -o libstack.so Stack.o $(LINK_DIR)Node.o

all: Stack.o Stack.so

Stack.so: $(INC_DIR)Stack.hpp $(SOURCE)Stack.cpp
	$(CC) -shared -Wl,-soname,libstack.so.1 -o libstack.so.1.0 $(LINK_DIR)Node.o Stack.o
	rm Stack.o
	mv libstack.so.1.0 bin
	ln -sf $(BIN_DIR)/libstack.so.1.0 $(BIN_DIR)/libstack.so.1
	ln -sf $(BIN_DIR)/libstack.so.1.0 $(BIN_DIR)/libstack.so

Stack.o: $(INC_DIR)Stack.hpp ../Node/include/Node.hpp $(SOURCE)Stack.cpp
	$(CC) $(INC_FLAGS) -g -c -fPIC $(SOURCE)Stack.cpp 

clean:
	rm bin/libstack.so.1.0