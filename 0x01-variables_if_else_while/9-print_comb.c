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

	putchar('0');
	for (a = 1; a <= 9; a++)
	{
		putchar(',');
		putchar(' ');
		putchar(a + '0');
	}
	return (0);
}
