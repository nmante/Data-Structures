CC=g++
DIRS=Node Stack Queue BinarySearch LinkedList
LINK_DIRS=-L../Stack/bin -L../Queue/bin -L../BinarySearch/bin -L../LinkedList/bin
LINK_FLAGS=-lstack -lqueue -lbinarysearch -llinkedlist
INC_DIRS=-I../Node/include -I../Stack/include -I../Queue/include \
-I../BinarySearch/include -I../LinkedList/include
EXE=DSExample
OBJS=main.o TestSuite.o

# 

$(EXE): $(OBJS)
	$(CC) $(OBJS) $(LINK_DIRS) $(LINK_FLAGS) -o $(EXE) 

main.o: 
	$(CC) -c -g main.cpp

TestSuite.o: TestSuite.hpp TestSuite.cpp
	$(CC) -c $(INC_DIRS) -g TestSuite.cpp 

clean:
	rm *.o $(EXE)