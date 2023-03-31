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

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a * b) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
