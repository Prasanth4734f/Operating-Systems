#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main()
{
    key_t key = 1234;

    int shmid = shmget(key, 1024, 0666 | IPC_CREAT);

    char *data = (char *)shmat(shmid, NULL, 0);

    strcpy(data, "Hello Shared Memory!");

    printf("Data Written: %s\n", data);

    shmdt(data);

    return 0;
}