// Does string has all unique characters
// we are assumming string to contain ascii characters only

#include "header.h"
#include <string.h>

//ascii has 128 chars, extended ascii has 256 chars
#define NUM_OF_CHARS 128

bool _13_chars_unique_in_str(char *str)
{
    if (str == NULL) {
        return false;
    }

    int i = 0;
    int char_map[NUM_OF_CHARS];

    for (i = 0; i < NUM_OF_CHARS; i++) {
        char_map[i] = 0;
    }

    for (i = 0; i < strlen(str); i++) {
        if (char_map[(str[i] - '0')] == 1) {
            return false;
        }
        char_map[(str[i] - '0')] = 1;
    }

    return true;
}