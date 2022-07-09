#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);




/**
 * struct list_format - structure 
 * @tf: type of format
 * @nfunc: name of function
 */
typedef struct list_format
{
	char *tf;
	int (*nfunc)(va_list);
} format_t;

int (*get_func_format(const char *format))(va_list);
int print_char(va_list print);
int print_string(va_list print);
#endif
