all: timer join arguments

timer:
	gcc timer.c -o timer -lpthread -Wall

join:
	gcc join.c -o join -lpthread -Wall

arguments:
	gcc arguments.c -o arguments -lpthread -Wall

clean:
	rm -rf timer join arguments
