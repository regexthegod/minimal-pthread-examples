#include <stdio.h>
#include <pthread.h>

void* function() {
	printf("Function thread spawned\n");
	while(1){}
	return NULL;
}

int main(int argc, char* argv[]) {
	pthread_t thread;
	pthread_create(&thread, NULL, &function, NULL);
	pthread_join(thread, NULL);
	return 0;
}
