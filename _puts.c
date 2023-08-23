// _puts.c
#include "main.h"

/**
 * _puts - Prints a string followed by a newline to stdout.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed (excluding newline).
 */
int _puts(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        putchar(*str);
        count++;
        str++;
    }

    return count;
}
