#include <stdarg.h>
#include <stdio.h>

void print_special_chars(char sp, va_list args, int i)
{
int c = va_arg(args, int);
i--;

printf("\nspecial char found: %c\nfound %c\nand i is: %d", sp, c, i);

/**
 * 

switch (sp)
{
case 'c':
    print_char(va_arg(args, char));
    break;

default:
    break;
}
*/

}
