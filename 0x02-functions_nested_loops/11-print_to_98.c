#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * Return: nothing (void)
 *
 * Author - Nana Obeng
 */
void print_to_98(int n)
{
	int i;

	for ( i = n; i <= 98; i++)
	{
		if ( n == 98)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
