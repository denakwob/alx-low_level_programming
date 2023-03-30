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
		for (b = a; b <= 59; b++)
		{
			_putchar((a / b) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
