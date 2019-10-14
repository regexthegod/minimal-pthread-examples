#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#include <pthread.h>

void* function() {
    printf("Function thread spawned\n");
    while(1){}
    return NULL;
}

void* timer() {
    printf("Timer thread spawned. Waiting 10 seconds then exiting\n\n");
    int counter = 0;
    while(1) {
        sleep(1);
        counter++;
        if(counter >= 10) 
            exit(0);
    }
    return NULL;
}

int main(int argc, char *argv[]) {

pthread_t thread;

pthread_create(&thread, NULL, &function, NULL);
pthread_create(&thread, NULL, &timer, NULL);
    
pthread_join(thread, NULL);

return 0;
}
