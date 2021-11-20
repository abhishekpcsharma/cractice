#include "header.h"

void _3_decimal_to_binary(unsigned long decimal_num)
{
	unsigned long i = 0;

	printf("Decimal number: %lu\n", decimal_num);
	printf("Binary number: ");

	for (i = 1UL << ((sizeof(unsigned long) * 8) - 1); i > 0; i = i/2) {
		(decimal_num & i) ? printf("1") : printf("0");
	}
	printf("\n");

	return;
}
