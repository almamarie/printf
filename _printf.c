#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a string
 * @format: the input string
 * Return: 0 if success or 1 otherwise
*/


/**
 * "these guys are awsome\0"
*/


int _printf(const char *format, ...)
{
char sp;
int sp_c;
int i;

va_list args;
sp_c = 1;
va_start(args, format);
i = 0;

while (format[i] != '\0')
{

if (format[i] == '%')
{
i++;
sp = format[i];

if (sp == '%')
{
_putchar('%');
i++;
continue;
} 

else 
{
print_special_chars(sp, args, sp_c);
i++;
}

}
_putchar(format[i]);
i++;
}

_putchar('\n');
return (0);
}

