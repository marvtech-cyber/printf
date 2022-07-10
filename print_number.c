#include "main.h"

/**
 * print_number - print integer
 * @n: int
 * Return: length of number printed
 */
int print_number(int n)
{
	int lenght = 0;
	unsigned int nbc = 0;
	unsigned int num = n;
	unsigned int i = 1;

	if (n == 0)
	{
		_putchar(48);
		lenght++;
	}
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			_putchar('-');
			lenght++;
			num = n;
		}
		while (num > 0)
		{
			num = num / 10;
			nbc++;
		}
		while (nbc > 1)
		{
			i = i * 10;
			nbc--;
		}
		while (i > 0)
		{
			_putchar(((n / i) % 10) + 48);
			lenght++;
			i = i / 10;
		}
	}
	return (lenght);
}
