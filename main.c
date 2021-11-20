#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "header.h"

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

	switch(argument) {
	case 1:
		_1_print_wo_semicolon();
		break;

	case 2:
		if (!are_args_sufficient(argc, 4)) {
			return 0;
		}

		printf ("Output: %s\n", _2_str_cat(*(argv + 2), *(argv + 3)));
		break;

	case 3:
		if (!are_args_sufficient(argc, 3)) {
			return 0;
		}

		if (**(argv + 2) == '-') {
			printf("negative number not allowed: %c\n",
					**(argv + 2));
			print_help();
			return 0;
		}
		for (int i = 0; i < strlen(*(argv + 2)); i++) {
			if (!isdigit(*(*(argv + 2) + i))) {
				printf("number has non digit characters: "
						"%s\n", *(argv + 2));
				print_help();
				return 0;
			}
		}
		char *ptr;
		unsigned long n = strtoul(*(argv + 2), &ptr, 10);

		_3_decimal_to_binary(n);
		break;

	default:
		printf("Invalid argument 2\n");
		print_help();
	}

	return 0;
}

bool are_args_sufficient(int argc, int n)
{
	if (argc < n) {
		printf("\nInvalid arguments\n");
		print_help();
		return false;
	}

	return true;
}

void print_help()
{
	printf("\nHelp!!\n");
	printf("1 :	Print a line without using semicolon in statement\n"
			"cmd: ./cractice 1\n");
	printf("2 :	Implement strcat\n"
			"cmd: ./cractice 2 <dest_str> <src_str>\n");
	printf("3 :	Decimal to binary conversion\n"
			"cmd: ./cractice 3 <unsigned long number>\n");
}
