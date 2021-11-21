#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "header.h"

int main (int argc, char *argv[])
{
	unsigned int num = 0;
	unsigned int bit_position = 0;
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

	case 4:
		if (!are_args_sufficient(argc, 4) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4)) {
			return 0;
		}
		num = atoi(*(argv + 2));
		bit_position = atoi(*(argv + 3));

		_4_set_nth_bit(num, bit_position);
		break;

	case 5:
		if (!are_args_sufficient(argc, 4) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4)) {
			return 0;
		}
		num = atoi(*(argv + 2));
		bit_position = atoi(*(argv + 3));

		_5_reset_nth_bit(num, bit_position);
		break;

	case 6:
		if (!are_args_sufficient(argc, 4) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4)) {
			return 0;
		}
		num = atoi(*(argv + 2));
		bit_position = atoi(*(argv + 3));

		_6_toggle_nth_bit(num, bit_position);
		break;

	case 7:
		if (!are_args_sufficient(argc, 4) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4)) {
			return 0;
		}
		num = (unsigned int) atoi(*(argv + 2));
		bit_position = (unsigned int) atoi(*(argv + 3));

		printf("number: %u, bit position: %u, is: %u\n", num, bit_position, _7_is_nth_bit_set(num, bit_position));
		break;

	case 8:
		if (!are_args_sufficient(argc, 5) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4) || is_non_digit_argument(argv, 5)) {
			return 0;
		}
		num = (unsigned int) atoi(*(argv + 2));
		unsigned int l = (unsigned int) atoi(*(argv + 3));
		unsigned int r = (unsigned int) atoi(*(argv + 4));

		if (l > r) {
			printf("l should be less than or equal to r\n");
			print_help();
			return 0;
		}

		_8_set_lth_to_rth_bits(num, l, r);
		break;

	case 9:
		if (!are_args_sufficient(argc, 5) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4) || is_non_digit_argument(argv, 5)) {
			return 0;
		}
		num = (unsigned int) atoi(*(argv + 2));
		l = (unsigned int) atoi(*(argv + 3));
		r = (unsigned int) atoi(*(argv + 4));

		if (l > r) {
			printf("l should be less than or equal to r\n");
			print_help();
			return 0;
		}

		_9_reset_lth_to_rth_bits(num, l, r);
		break;

	case 10:
		if (!are_args_sufficient(argc, 5) || is_arg_negative_num(argv) || is_non_digit_argument(argv, 3) || is_non_digit_argument(argv, 4) || is_non_digit_argument(argv, 5)) {
			return 0;
		}
		num = (unsigned int) atoi(*(argv + 2));
		l = (unsigned int) atoi(*(argv + 3));
		r = (unsigned int) atoi(*(argv + 4));

		if (l > r) {
			printf("l should be less than or equal to r\n");
			print_help();
			return 0;
		}

		_10_toggle_lth_to_rth_bits(num, l, r);
		break;

	default:
		printf("Invalid argument 2\n");
		print_help();
	}

	return 0;
}

bool is_arg_negative_num(char *argv[])
{
	if (**(argv + 2) == '-') {
		printf("negative number not allowed: %s\n",
				*(argv + 2));
		print_help();
		return true;
	}
	return false;
}

bool is_non_digit_argument(char *argv[], int arg_num)
{
	for (int i = 0; i < strlen(*(argv + (arg_num -1))); i++) {
		if (!isdigit(*(*(argv + (arg_num -1)) + i))) {
			printf("number has non digit characters: "
					"%s\n", *(argv + (arg_num -1)));
			print_help();
			return true;
		}
	}
	return false;
}

bool are_args_sufficient(int argc, int n)
{
	if (argc < n) {
		printf("\nInsufficient arguments\n");
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
	printf("4 :	set nth bit of a number\n"
			"cmd: ./cractice 4 <unsigned int number> <bit position>\n");
	printf("5 :	reset nth bit of a number\n"
			"cmd: ./cractice 5 <unsigned int number> <bit position>\n");
	printf("6 :	toggle nth bit of a number\n"
			"cmd: ./cractice 6 <unsigned int number> <bit position>\n");
	printf("7 :	check nth bit of a number\n"
			"cmd: ./cractice 7 <unsigned int number> <bit position>\n");
	printf("8 :	set lth bit to rth bit of a number where l < r\n"
			"cmd: ./cractice 8 <unsigned int number> <l bit position> <r bit position>\n");
	printf("9 :	reset lth bit to rth bit of a number where l < r\n"
			"cmd: ./cractice 8 <unsigned int number> <l bit position> <r bit position>\n");
	printf("10:	toggle lth bit to rth bit of a number where l < r\n"
			"cmd: ./cractice 8 <unsigned int number> <l bit position> <r bit position>\n");

}
