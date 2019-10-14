#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

struct arg_struct {
	int arg1;
	int arg2;
	int arg3;
	int arg4;
};

void* function(void *arguments) {
	struct arg_struct *args = arguments; 
	printf("Function thread spawned with arguments: %i, %i, %i, %i\n", args->arg1, args->arg2, args->arg3, args->arg4);
	return NULL;
}

int main(int argc, char *argv[]) {
	struct arg_struct args;
	args.arg1 = 0;
	args.arg2 = 1;
	args.arg3 = 2;
	args.arg4 = 3;
	pthread_t thread;
	pthread_create(&thread, NULL, &function, &args);
	pthread_join(thread, NULL);
	return 0;
}
