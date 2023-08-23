// int_conversions.c
#include "main.h"

/**
 * print_int - Prints integer number.
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void print_int(va_list args, int *count)
{
    int num = va_arg(args, int);
    char buffer[BUFF_SIZE];
    int ind = 0;

    // Handle length modifiers
    if (has_length_modifier_l)
    {
        long l_num = (long)num;
        ind = write_number(l_num < 0, ind, buffer, 0, 0, 0);
        ind = write_num(ind, buffer, 0, 0, 0, l_num, '0', '\0');
    }
    else if (has_length_modifier_h)
    {
        short h_num = (short)num;
        ind = write_number(h_num < 0, ind, buffer, 0, 0, 0);
        ind = write_num(ind, buffer, 0, 0, 0, h_num, '0', '\0');
    }
    else
    {
        ind = write_number(num < 0, ind, buffer, 0, 0, 0);
        ind = write_num(ind, buffer, 0, 0, 0, num, '0', '\0');
    }

    // Print the formatted string
    buffer[ind] = '\0';
    print_buffer(buffer, count);
}
