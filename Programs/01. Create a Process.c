#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();   // Create a new process

    printf("Process ID (PID) = %d\n", getpid());
    printf("Parent Process ID (PPID) = %d\n", getppid());

    return 0;
}