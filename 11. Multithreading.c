#include <stdio.h>
#include <pthread.h>

void* display(void *arg)
{
    printf("Hello from Thread!\n");
    return NULL;
}

int main()
{
    pthread_t thread;

    pthread_create(&thread, NULL, display, NULL);

    pthread_join(thread, NULL);

    printf("Main Program Finished.\n");

    return 0;
}