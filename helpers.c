// helpers.c
#include "main.h"

/**
 * print_number - Prints an integer to stdout.
 * @num: The integer to be printed.
 * @count: Pointer to the character count.
 */
void print_number(int num, int *count)
{
    // ... (implementation for printing an integer)
}

/**
 * write_plus_space - Writes '+' or space based on flag character.
 * @is_positive: Indicates if the number is positive.
 * @buffer: Buffer to store the character.
 * @ind: Index for buffer.
 */
void write_plus_space(int is_positive, char buffer[], int *ind)
{
    if (is_positive)
    {
        buffer[(*ind)++] = '+';
    }
    else
    {
        buffer[(*ind)++] = ' ';
    }
}

/**
 * write_hash - Writes '#' flag character.
 * @buffer: Buffer to store the character.
 * @ind: Index for buffer.
 */
void write_hash(char buffer[], int *ind)
{
    buffer[(*ind)++] = '0';
}