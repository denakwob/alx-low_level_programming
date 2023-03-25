#include <stdio.h>
/**
 * main - prints possible combinations
 *
 * Return: 0 upon success
 *
 * Author - Nana Obeng
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 57)
		{
			putchar(a);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('9');
	return (0);
}
