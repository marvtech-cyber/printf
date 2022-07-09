#include "main.h"
#include <stdarg.h>

/**
 * print_percent - print a percent
 * @print:item to print
 * Return: length.
 */

int print_percent(va_list print)
{
	int length = 0;
	(void) print;

	_putchar('%');
	length++;

	return (length);
}
