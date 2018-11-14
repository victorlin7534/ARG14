default: main.o parser.o
	gcc -o test main.o parser.o
main.o: main.c parser.h
	gcc -c main.c
parser.o: parser.c parser.h
	gcc -c parser.c
run:
	./test
clean:
	rm -f *~ *o *exe test* *out
