#include "header.h"

//nth bit can be toggled by XORing nth bit with 1
void _6_toggle_nth_bit(unsigned int num, char bit_position)
{
	printf("Toggling bit position: %d of number: %d\n", bit_position, num);
	_3_decimal_to_binary(num);

	num = num ^ (1 << (bit_position - 1));

    printf("Output:\n");
	_3_decimal_to_binary(num);
	return;
}