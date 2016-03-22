CC=g++
DIRS=Node Queue Stack BinarySearch LinkedList Examples

# all:
# 	cd Node; make
# 	cd Queue; make
# 	cd Stack; make
# 	cd BinarySearch; make
# 	cd LinkedList; make

all:
	for d in $(DIRS); do \
	cd $$d; mkdir -p bin; make; cd ..; \
	done

clean:
	for d in $(DIRS); do \
	cd $$d; make clean; cd ..; \
	done 
