CC=gcc

make: ptr-practice.c
	$(CC) ptr-practice.c -o ptr-practice.o

clean:
	 rm -f *.o
