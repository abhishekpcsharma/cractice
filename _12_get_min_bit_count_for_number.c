#include "header.h"

//get minimum number of bits required to save a number.
unsigned int _12_get_min_bit_count_for_number(unsigned int num)
{
    if (!num) {
        return 0;
    }
    
    unsigned int count = 0;
	printf("Input:\n");
	_3_decimal_to_binary(num);
 
    for (int i = ((sizeof(unsigned int) * 8) - 1); i > 0; i--) {
        if(num & (1 << i)) {
            count = i;
            break;
        }
    }
	return ++count;
}