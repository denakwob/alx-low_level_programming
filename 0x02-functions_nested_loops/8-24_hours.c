#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 *
 * Author - Nana Obeng
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (b == 0)
			{
				_putchar((a / 10) + '0');
			}
			else
			{
				_putchar((a % 24) + '0');
			}
			_putchar(':');
			if (b < 10)
			{
				_putchar('0');
			}
			_putchar((b % 60) + '0');
			_putchar('\n');
		}
	}
}
