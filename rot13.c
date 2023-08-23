#include "main.h"

/**
 * print_rot13_string - Prints a rot13'ed string.
 * @types: va_list containing the argument to be printed (char*).
 * @buffer: Array to store the formatted output.
 * @flags: Flags for formatting.
 * @width: Width for formatting.
 * @precision: Precision for formatting.
 * @size: Size for formatting.
 * Return: Number of characters printed.
 */
int print_rot13_string(va_list types, char buffer[],
                       int flags, int width, int precision, int size)
{
    char *str = va_arg(types, char *);
    int printed_chars = 0;

    if (str == NULL)
        str = "(null)";

    printed_chars += print_rot13_buffer(str);

    return (printed_chars);
}
