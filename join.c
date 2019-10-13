#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

void* function() {

	printf("Thread spawned\n");

	sleep(10);
}

int main(int argc, char *argv[]){

	if(argc < 1){

		fprintf(stderr, "Usage: %s <threads>\n", argv[0]);
		exit(1);
	}

	pthread_t thread_id;

	for(int i = 0; i < atoi(argv[1]); i++) {

	pthread_create(&thread_id, NULL, &function, NULL);
	}

	pthread_join(thread_id, NULL);

	return 0;
}
