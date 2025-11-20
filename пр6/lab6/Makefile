CC = gcc

CFLAGS = -Wall -Werror -Iinclude

run: app
	./app > out.txt
	./app 2> err.txt
	./app > all.txt 2>&1

app: main.o filelib.o
	$(CC) $(CFLAGS) main.o filelib.o -o app

main.o: main.c filelib.h
	$(CC) $(CFLAGS) -c main.c -o main.o

filelib.o: filelib.c filelib.h
	$(CC) $(CFLAGS) -c filelib.c -o filelib.o

clean:
	rm -f main.o filelib.o app log.txt