progress:progress.o main.o
	gcc -o progress progress.o main.o
progress.o:progress.c
	gcc -c progress.c -o progress.o
main.o:main.c progress.h
	gcc -c main.c -o main.o
.PHANY:clean
clean:
	rm -f progress progress.o main.o