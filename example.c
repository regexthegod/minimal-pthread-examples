#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

void* function() { // function that threads will be calling

	printf("Thread spawned\n");

	while(1){} // give the function something to do
}

int main(int argc, char *argv[]){

	if(argc < 2){

	fprintf(stderr, "Usage: %s <threads> <time>\n", argv[0]);
	exit(1);
	}

	pthread_t thread_id;

	for(int i = 0; i < atoi(argv[1]); i++) { // spawn number of threads based on argv[1]

	pthread_create(&thread_id, NULL, &function, NULL);
	}

	int seconds = 0; // exit cleanly after number of seconds based on argv[2]

	while(1){
	seconds++;
      
		if(seconds >= atoi(argv[2])) {
			
		exit(1);
		}
		
		sleep(1);
	}

return 0;
}
