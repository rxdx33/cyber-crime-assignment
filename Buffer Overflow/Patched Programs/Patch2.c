#include <stdio.h>
#include <strdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char buffer[100];
	if (arc != 2)
	{
		exit(0);
	}
	
	if (strlen(argv[1]) < 100)
	{
		strcpy(buffer, argv[1]));
		if (strcmp(buffer, "admin") == 0)
		{
			printf("You've successfully logged in!\n");
		}
		else
		{
			printf("Wrong password!\n");
		}
	}
	else
	{
		printf("Invalid input!\n");
	}
}
