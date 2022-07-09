#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - print the string and these possibles arguments
 * @format: string to print
 * Return: length of the string printed
 */
int _printf(const char *format, ...)
{
	int i = 0, length = 0;
	int (*function)(va_list);
	va_list print;

	va_start(print, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			i++;
			if (format[i] != '\0')
			{
				function = get_func_format(format + i);
				i++;
			}
			if (function == NULL)
			{
				_putchar('%'), _putchar(format[i - 1]),	length += 2;
			}
			else
				length += function(print);
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(print);
	return (length);
}
