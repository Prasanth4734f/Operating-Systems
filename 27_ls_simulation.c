#include <stdio.h>
#include <dirent.h>
#include <string.h>

int main()
{
    char path[100];

    printf("Enter directory path: ");
    scanf("%s", path);

    DIR *dir = opendir(path);

    if (dir == NULL)
    {
        perror("Unable to open directory");
        return 1;
    }

    struct dirent *entry;

    printf("\nDirectory contents:\n");

    while ((entry = readdir(dir)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;
}
