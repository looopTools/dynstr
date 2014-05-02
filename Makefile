all: dynstr main make_exec 

make_exec:
	gcc app.o dynstr.o
main: 
	gcc -pedantic -Wall -O -c app.c
dynstr:
	gcc -pedantic -Wall -O -c dynstr.c
