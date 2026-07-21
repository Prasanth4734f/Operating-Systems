#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("input.txt", "r");

    if (source == NULL)
    {
        printf("Source file not found.\n");
        return 0;
    }

    destination = fopen("output.txt", "w");

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}