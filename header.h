//Header file

#include <stdio.h>
#include <stdbool.h>

void print_help();
bool are_args_sufficient(int argc, int n);
bool is_arg_negative_num(char *argv[]);
bool is_non_digit_argument(char * argv[], int arg_num);

void _1_print_wo_semicolon();
char *_2_str_cat(char * dest, char *src);
void _3_decimal_to_binary(unsigned long decimal_num);
void _4_set_nth_bit(unsigned int num, char bit_position);
void _5_reset_nth_bit(unsigned int num, char bit_position);