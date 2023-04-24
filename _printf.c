#include "main.h"

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
int i;

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
}

}

_putchar(format[i]);
i++;
}

_putchar('\n');
return (0);
}
