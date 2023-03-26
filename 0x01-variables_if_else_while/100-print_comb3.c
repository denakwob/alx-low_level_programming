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

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if ( i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
