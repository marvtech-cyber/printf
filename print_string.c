#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_string - print a string
 * @print: string to print
 * Return: length.
 */

int print_string(va_list print)
{
	char *s = va_arg(print, char *);
	int i = 0, length = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++;
		length++;
	}
	return (length);
}
