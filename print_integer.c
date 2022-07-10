#include "main.h"
#include <stdarg.h>

/**
 * print_integer - prints an integer
 * @print: item to print
 * Return: lenght of thing printed
 */

int print_integer(va_list print)
{
	int i = va_arg(print, int);

	return (print_number(i));
}
