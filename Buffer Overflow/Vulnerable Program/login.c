#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char buffer[100];
    if (argc != 2)
    {
        exit(0);
    }

    strcpy(buffer, argv[1]);

    if (strcmp(buffer, "admin") == 0)
    {
        printf("You've successfully logged in!\n");
    }
    else
    {
        printf("Wrong password!\n");
    }
}
