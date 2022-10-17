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
	memset(buffer, '\0', sizeof(buffer));
	strncpy(buffer, argv[1], 98);
	if (strcmp(buffer, "admin") == 0)
	{
		printf("You've successfully logged in!\n");
	}
	else
	{
		printf("wrong password!\n");
	}
}