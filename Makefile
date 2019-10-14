all: timer join arguments

timer:
	gcc -o timer timer.c -lpthread -Wall

join:
	gcc -o join join.c -lpthread -Wall

arguments:
	gcc -o arguments arguments.c -lpthread -Wall

clean:
	rm -rf timer join arguments
