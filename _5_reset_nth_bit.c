#include "header.h"

//nth bit can be reset by ANDing nth bit with 0
void _5_reset_nth_bit(unsigned int num, char bit_position)
{
	printf("Resetting bit position: %d of number: %d\n", bit_position, num);
	_3_decimal_to_binary(num);

	num = num & ~(1 << (bit_position - 1));
	
	_3_decimal_to_binary(num);
	printf("Output number: %d\n", num);
	return;
}