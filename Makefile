all: dynstr main make_exec 

make_exec:
	gcc app.o dynstr.o
main: 
	gcc -Wall -O -c app.c
dynstr:
	gcc -Wall -O -c dynstr.c
