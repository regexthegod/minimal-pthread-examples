#include <stdio.h>
#include <pthread.h>

pthread_t thread;

void* function() {
	printf("Function thread spawned\n");
	while(1){}
	return NULL;
}

int main(int argc, char* argv[]) {
	pthread_create(&thread, NULL, &function, NULL);
	pthread_join(thread, NULL);
	return 0;
}
