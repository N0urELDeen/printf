// string_conversions.c
#include "main.h"

/**
 * handle_string_conversion - Handles string conversion (S).
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void handle_string_conversion(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    print_string_with_non_printable(str, count);
}
