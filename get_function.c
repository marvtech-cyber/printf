#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * get_func_format - get function as per format
 * @format: string parameter
 * Return: function to use
 */

int (*get_func_format(const char *format))(va_list)
{
	int i = 0;

	format_t list_format[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},

		{NULL, NULL}
	};

	while (list_format[i].tf != NULL)
	{
		if (*format == *list_format[i].tf)
		{
			return (list_format[i].nfunc);
		}
		i++;
	}

	return (NULL);

}
