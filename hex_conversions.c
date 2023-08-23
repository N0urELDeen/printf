// hex_conversions.c
#include "main.h"

/**
 * print_hexadecimal - Prints hexadecimal number.
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void print_hexadecimal(va_list args, int *count)
{
    unsigned int num = va_arg(args, unsigned int);
    int width = get_width_from_args(args);
    int precision = get_precision_from_args(args); // Get precision using va_arg
    char buffer[BUFF_SIZE];
    int ind = 0;

    // ... (Handle length modifiers and field width as before)

    // Handle precision
    handle_precision(buffer, &ind, precision);

    // Print the formatted string
    buffer[ind] = '\0';
    print_buffer(buffer, count);
}

/**
 * print_octal - Prints octal number.
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void print_octal(va_list args, int *count)
{
    unsigned int num = va_arg(args, unsigned int);
    int width = get_width_from_args(args);
    int precision = get_precision_from_args(args); // Get precision using va_arg
    char buffer[BUFF_SIZE];
    int ind = 0;

    // ... (Handle length modifiers and field width as before)

    // Handle precision
    handle_precision(buffer, &ind, precision);

    // Print the formatted string
    buffer[ind] = '\0';
    print_buffer(buffer, count);
}
