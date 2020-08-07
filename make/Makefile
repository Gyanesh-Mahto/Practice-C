# -*- MakeFile -*-
#target : dependencies
#       action

all: main sum mul

#sum: main.o sum.o print.o
#       gcc main.o sum.o print.o -o sum

#mul: main.o mul.o print.o
#       gcc main.o mul.o print.o -o mul

main: main.o sum.o mul.o print.o
        gcc main.o sum.o mul.o print.o -o main

main.o: main.c sum.h mul.h print.h
        gcc -c main.c

sum.o: sum.c sum.h print.h
        gcc -c sum.c

print.o: print.c print.h
        gcc -c print.c

mul.o: mul.c mul.h print.h
        gcc -c mul.c

clean:
        rm main *.o
