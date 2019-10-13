all: timer.c join.c
	gcc -o timer timer.c -lpthread
	gcc -o join join.c -lpthread
