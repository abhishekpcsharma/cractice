#include "header.h"

//nth bit can be set by ORing nth bit with 1
void _4_set_nth_bit(int num, char bit_position)
{
	printf("Setting bit position: %d of number: %d\n", bit_position, num);
	printf("Original number in binary: ");
	_3_decimal_to_binary(num);

	num = num | (1 << (bit_position - 1));
	
	printf("Ouput number in binary: ");
	_3_decimal_to_binary(num);
	printf("Output number: %d\n", num);
	return;
}
