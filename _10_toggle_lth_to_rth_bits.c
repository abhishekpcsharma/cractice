#include "header.h"

//toggle lth to rth bits of a number where l is on LSB side and r is on MSB side. 
void _10_toggle_lth_to_rth_bits(unsigned int num, char l, char r)
{
	printf("Input:\n");
	_3_decimal_to_binary(num);
	_3_decimal_to_binary(((1 << (l - 1)) -1));
    _3_decimal_to_binary ((1 << r) - 1);
    unsigned int range = ((1 << (l - 1)) - 1) ^ ((1 << r) - 1);
    _3_decimal_to_binary(range);

    num = num ^ range;

	printf("Output:\n");
	_3_decimal_to_binary(num);
	return;
}