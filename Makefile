CC = gcc

CFLAGS = -g -Wall

default: testing

testing: tests.o monster.o timer.o unity.o
	$(CC) $(CFLAGS) -o testing tests.o monster.o timer.o unity.o

tests.o: tests.c
	$(CC) $(CFLAGS) -c tests.c

monster.o: monster.c monster.h
	$(CC) $(CFLAGS) -c monster.c

timer.o: timer.c timer.h
	$(CC) $(CFLAGS) -c timer.c

unity.o: unity.c unity.h unity_internals.h
	$(CC) $(CFLAGS) -c unity.c

clean:
	$(RM) tests *.o *~
