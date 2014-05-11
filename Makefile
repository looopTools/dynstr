all: dynstr main make_exec 

make_exec:
	gcc app.o dynstr.o
main: 
	gcc -g -pedantic -Wall -O -c app.c
dynstr:
	gcc -g -pedantic -Wall -O -c dynstr.c
