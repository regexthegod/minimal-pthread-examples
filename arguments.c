#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

struct arg_struct { // declare structure containing our arguments
	int arg1;
	int arg2;
	int arg3;
	int arg4;
};

void* function(void *arguments) { // function that threads will be calling
	struct arg_struct *args = arguments; 

	printf("Thread spawned with arguments: %i, %i, %i, %i\n", args->arg1, args->arg2, args->arg3, args->arg4);
	sleep(10); // give the function something to do
	
	return NULL;
}

int main(int argc, char *argv[]){

	if(argc < 2){
		fprintf(stderr, "Usage: %s <threads>\n", argv[0]);
		exit(1);
	}

	pthread_t thread_id;

	struct arg_struct args;

	args.arg1 = 0;
	args.arg2 = 1;
	args.arg3 = 2;
	args.arg4 = 3;

for(int i = 0; i < atoi(argv[1]); i++) { // spawn number of threads based on argv[1]
	pthread_create(&thread_id, NULL, &function, &args);

	sleep(1);

	args.arg1++;
	args.arg2++;
	args.arg3++;
	args.arg4++;
	
	sleep(1);
}

	pthread_join(thread_id, NULL); // join last thread then return and exit program cleanly after it completes

	return 0;
}
