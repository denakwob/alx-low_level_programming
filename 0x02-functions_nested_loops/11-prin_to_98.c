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
	while ( n > 0)
	{
		if ( n <= 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
