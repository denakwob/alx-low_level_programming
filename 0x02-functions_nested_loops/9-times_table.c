#include "main.h"
/**
 * times_table - prints times table in 9
 *
 * Return: nothing
 *
 * Author - Nana Obeng
 */
void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = a * b;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
