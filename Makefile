algo : main.o queue.o
	ld *.o -macosx_version_min 10.14 -lc -o algo
main.o : main.c 
	gcc -c main.c -o main.o
queue.o : DataStructure/queue.c DataStructure/queue.h
	gcc -c DataStructure/queue.c -o queue.o