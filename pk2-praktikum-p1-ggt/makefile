CC = gcc
OBJECTS = ggt.o calcggt.o
LIBS = ggt.h
NAME = calcggt

calcggt: $(OBJECTS)
	$(CC) -o $(NAME) $(OBJECTS) $(LIBS)

%.o: %.c
	$(CC) -c $<

clean:
	rm *.o $(NAME)