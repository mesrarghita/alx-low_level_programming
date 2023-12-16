#include "main.h"

unsigned int binary_to_uint(const char *b)
/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: The binary string to convert
 *
 * Iterates through the binary string, shifting and ORing
 * the result based on the value of each character ('0' or '1').
 * Returns 0 if invalid input is encountered.
 */
{
    unsigned int n = 0;
    while (*b) {
        if (*b == '0') {
            n <<= 1;
        } else if (*b == '1') {
            n <<= 1;
            n |= 1;
        } else {
            return 0; // invalid input
        }
        b++;
    }
    return n;
}

