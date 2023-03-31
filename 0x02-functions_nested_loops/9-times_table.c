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
	/* Declare variables for multiplication */
	int a;
	int b;
	int res;
	/* loop through rows */
	for (a = 0; a <= 9; a++)
	{
		/* loop through columns */
		for (b = 0; b <= 9; b++)
		{
			/* Calculate result of multiplication */
			res = a * b;
			/* If the result is less than 10, print a space and the result digit */
			if (res < 10)
			{
				_putchar(res + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			/* If result is <= 10, print tens digit,  space, and the ones digit */
			else
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
				_putchar(',');
			}
			/* If we're not on the last column, print a comma */
		/*	if (b != 9)
			{
				_putchar(',');
			}*/
		}
		/* Move to the next row */
		_putchar('\n');
	}
}
