#include <string.h>
#include <stdlib.h>

#include "header.h"

//Concatenate src at the end of dest
char *_2_str_cat(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;

	if (src == NULL)
		return dest;

	// original implementation of strcat is flawed.
	// Buffer overflow is not considered in original implementation.
	// Following commented implementation implements the same flawed version.

	// //point to end of dest
	// char *temp = dest + strlen(dest);

	// while (*src != '\0') {
	// 	*dest++ = *src++;
	// }
	// *dest = '\0';

	// return dest;


	// Following version takes care of buffer overflow
	char *out = (char *)malloc(strlen(dest) + strlen(src) + 1);

	int i = 0;
	while(dest[i] != '\0') {
		out[i] = dest[i];
		i++;
	}

	int j = 0;
	while((out[i++] = src[j++]))
	;

	return out;
}
