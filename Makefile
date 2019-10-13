all: timer.c join.c
	gcc -o timer timer.c -lpthread -Wall
	gcc -o join join.c -lpthread -Wall
