#include "main.h"
/**
 * print_percent - Prints a percent sign
 * @types: list of arguments
 * @buffer: buffer array to handle print
 * @flags:  calculates active flags
 * @width: get width.
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars printed
 */

int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
