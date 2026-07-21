#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct message
{
    long type;
    char text[100];
};

int main()
{
    struct message msg;

    key_t key = 1234;

    int msgid = msgget(key, 0666 | IPC_CREAT);

    msg.type = 1;

    strcpy(msg.text, "Hello Message Queue!");

    msgsnd(msgid, &msg, sizeof(msg.text), 0);

    printf("Message Sent Successfully.\n");

    return 0;
}