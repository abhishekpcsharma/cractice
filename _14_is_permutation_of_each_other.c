// Write a function to check whether two given strings are Permutation of each other or not.
// A Permutation of a string is another string that contains same characters,
// only the order of characters can be different.
// For example, “abcd” and “dabc” are Permutation of each other.

#include "header.h"
#include <string.h>

// Assuming ascii chars only
#define NUM_CHARS 128

bool _14_is_permutation_of_each_other(char *s, char *t)
{
    if (s == NULL || t == NULL) {
        return false;
    }

    if (strlen(s) != strlen(t)) {
        return false;
    }

    int i = 0;
    char char_map[NUM_CHARS];

    for (i = 0; i < NUM_CHARS; i++) {
        char_map[i] = 0;
    }

    for (i = 0; i < strlen(s); i++) {
        char_map[(s[i] - '0')]++;
    }

    for (i = 0; i < strlen(t); i++) {
        char_map[(t[i] - '0')]--;

        if (char_map[(t[i] - '0')] < 0) {
            return false;
        }
    }
    return true;

}