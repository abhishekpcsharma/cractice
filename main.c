#include "header.h"

#include <stdlib.h>

int main (int argc, char *argv[])
{
	if (argc < 2) {
		printf("Expected atleast 2 arguments\n");
		print_help();
		return 0;
	}

	int argument = atoi(*(argv + 1));

	printf("arg1: %s\n", *argv);
	printf("arg2: %s\n", *(argv + 1));

	switch(argument)
	{
		case 1:
			_1_print_wo_semicolon();
			break;

		default:
			printf("Invalid argument 2\n");
			print_help();
	}

	return 0;
}

void print_help()
{
	printf("Argument 2 for program\n");
	printf("1 :	Print a line without using semicolon in statement\n");

}
