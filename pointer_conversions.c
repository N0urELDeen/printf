// pointer_conversions.c
#include "main.h"

/**
 * handle_pointer_conversion - Handles pointer conversion (p).
 * @args: Argument list.
 * @count: Pointer to the character count.
 */
void handle_pointer_conversion(va_list args, int *count)
{
    void *ptr = va_arg(args, void *);
    print_pointer_address(ptr, count);
}
