# -*- MakeFile -*-
#target : dependencies
#	action

sum: main.o sum.o print.o
	gcc main.o sum.o print.o -o sum

main.o: main.c sum.h print.h
	gcc -c main.c

sum.o: sum.c sum.h print.h
	gcc -c sum.c

print.o: print.c print.h
	gcc -c print.c

clean:
	rm sum main.o sum.o print.o