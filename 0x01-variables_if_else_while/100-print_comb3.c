#include <stdio.h>
/**
 * main - possible combinations of two digits
 * 
 * Return: 0 on success
 *
 * Author - Nana Obeng
 */
int main(void)
{
	int i;
	int j;
	int last_digit;

	last_digit = 9;

	for (i = 0; i <= last_digit; i++)
	{
		for (j = i; j <= last_digit; j++)
		{
			if ( i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
