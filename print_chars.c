#include "main.h"
/**
 * print_char - Prints a char
 * @types: bist a of arguments
 * @buffer: buffer array to handle print
 * @flags: active flags
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars printed
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
