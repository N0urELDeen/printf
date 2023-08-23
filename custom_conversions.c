// custom_conversions.c
#include "main.h"

/**
 * handle_binary_conversion - Handles binary conversion (b).
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void handle_binary_conversion(va_list args, int *count)
{
    unsigned int num = va_arg(args, unsigned int);
    print_binary(num, count);
}
