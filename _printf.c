#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
    int i, printed = 0, printed_chars = 0;
    int flags, width, precision, size, buff_ind = 0;
    va_list list;
    char buffer[BUFF_SIZE];

    if (format == NULL)
        return (-1);

    va_start(list, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE)
                print_buffer(buffer, &buff_ind);
            printed_chars++;
        }
        else
        {
            print_buffer(buffer, &buff_ind);
            flags = get_flags(format, &i);
            width = get_width(format, &i, list);
            precision = get_precision(format, &i, list);
            size = get_size(format, &i);
            ++i;

            // Handle '-' flag
            int has_minus_flag = (flags & F_MINUS) != 0;

            printed = handle_print(format, &i, list, buffer,
                                   flags, width, precision, size, has_minus_flag);

            if (printed == -1)
                return (-1);
            printed_chars += printed;
        }
    }

    // Print the remaining buffer
    print_buffer(buffer, &buff_ind);

    va_end(list);

    return (printed_chars);
}
