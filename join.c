#include <stdio.h>
#include <pthread.h>

void* function() {
	printf("Function thread spawned\n");
	return NULL;
}

int main() {
	pthread_t thread;
	pthread_create(&thread, NULL, &function, NULL);
	pthread_join(thread, NULL);
	return 0;
}
