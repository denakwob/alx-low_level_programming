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

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
