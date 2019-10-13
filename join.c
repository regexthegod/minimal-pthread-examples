#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

void* function() { // function that threads will be calling
	printf("Thread spawned\n");
	sleep(10); // give the function something to do
	
	return NULL;
}

int main(int argc, char *argv[]){

	if(argc < 2){
		fprintf(stderr, "Usage: %s <threads>\n", argv[0]);
		exit(1);
	}

	pthread_t thread_id;

	for(int i = 0; i < atoi(argv[1]); i++) { // spawn number of threads based on argv[1]
	pthread_create(&thread_id, NULL, &function, NULL);
	}

	pthread_join(thread_id, NULL); // join last thread then return and exit program cleanly after it completes

	return 0;
}
