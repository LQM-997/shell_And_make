myapp: src.o sum.o print.o
	gcc -o myapp src.o sum.o print.o
src.o: src.c sum.h print.h
	gcc -c src.c
sum.o: sum.c sum.h
	gcc -c sum.c
print.o: print.c print.h
	gcc -c print.c
