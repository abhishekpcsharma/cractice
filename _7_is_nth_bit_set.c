#include "header.h"

//nth bit can be checked by ANDing nth bit with 1
bool _7_is_nth_bit_set(unsigned int num, char bit_position)
{
	_3_decimal_to_binary(num);

	return (num & (1 << (bit_position - 1)) ? true : false);
}