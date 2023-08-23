#include "main.h"

/**
 * print_reversed_string - Prints a reversed string.
 * @types: va_list containing the argument to be printed (char*).
 * @buffer: Array to store the formatted output.
 * @flags: Flags for formatting.
 * @width: Width for formatting.
 * @precision: Precision for formatting.
 * @size: Size for formatting.
 * Return: Number of characters printed.
 */
int print_reversed_string(va_list types, char buffer[],
                          int flags, int width, int precision, int size)
{
    char *str = va_arg(types, char *);
    int str_len = 0;
    int printed_chars = 0;

    if (str == NULL)
        str = "(null)";

    str_len = _strlen(str);

    if (precision >= 0 && precision < str_len)
        str_len = precision;

    if (!(flags & F_MINUS))
        printed_chars += write_padding(' ', width - str_len);

    printed_chars += print_buffer_rev(str, str_len);

    if (flags & F_MINUS)
        printed_chars += write_padding(' ', width - str_len);

    return (printed_chars);
}
