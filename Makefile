all: timer.c
	gcc -o timer timer.c -lpthread
	gcc -o join join.c -lpthread
