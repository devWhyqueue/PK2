CC = gcc
CFLAGS=-L./
OBJECTS = ascii.o decToDual.o einmaleins.o nUeberK.o main.o
LIBS = libpk2.a
NAME = p2

p2: $(LIBS)
	$(CC) -o $(NAME) $(CFLAGS) $(LIBS)	

decToDual.o: decToDual.c decToDual.h
	$(CC) decToDual.c -lm -c

main.o: main.c
	$(CC) main.c -lpk2 -c

%.o: %.c decToDual.o main.c
	$(CC) -c $<

libpk2.a: $(OBJECTS)
	ar r libpk2.a $(OBJECTS)

clean:
	rm *.o $(NAME)