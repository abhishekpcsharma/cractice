#include <string.h>

#include "header.h"

//Concatenate src at the end of dest
char *_2_str_cat(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;

	if (src == NULL)
		return dest;

	int dest_len = strlen(dest);
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return dest;
}
