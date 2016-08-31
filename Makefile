pointer: main.o
	g++ $(CFLAGS) -o  pointer main.o
main.o: main.c
	gcc $(CFLAGS) -c main.c
clean: 
	rm -f *.o pointer