#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: The arguments to be printed.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; // Move past '%'

            // Handle specific conversion specifiers
            switch (*format)
            {
                case 'c':
                    // Handle character conversion
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    // Handle string conversion
                    count += _puts(va_arg(args, char *));
                    break;
                case '%':
                    // Handle '%' character
                    putchar('%');
                    count++;
                    break;
                default:
                    // Handle unsupported specifier
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }

            /* Move to the next character in format */
            format++;
        }
        else
        {
            // Print non-'%' characters directly
            putchar(*format);
            count++;
            format++;
        }
    }

    va_end(args);
    return count;
}

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

