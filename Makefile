all: timer.c join.c arguments.c
	gcc -o timer timer.c -lpthread -Wall
	gcc -o join join.c -lpthread -Wall
	gcc -o arguments arguments.c -lpthread -Wall
