all: main

main: teste.o rema.o
	cc -o main teste.o rema.o

teste.o: teste.c rema.h
	cc -c teste.c

rema.o: rema.c rema.h
	cc -c rema.c

clean:
	rm -f *.o main
