CC=g++
INC_DIR=include/
INC_FLAGS=-Iinclude/ -I../Node/include/
SOURCE=src/
LINK_DIR=../Node/bin/

all: Queue.o Queue.so

# $(LINK_DIR)Node.o
Queue.so: Queue.o
	$(CC) -shared -o libqueue.so -L$(LINK_DIR) -lnode  Queue.o
	rm Queue.o
	mv libqueue.so bin




Queue.o: $(INC_DIR)Queue.hpp ../Node/include/Node.hpp $(SOURCE)Queue.cpp
	$(CC) $(INC_FLAGS) -c -g -fPIC $(SOURCE)Queue.cpp

clean:
	rm bin/libqueue.so