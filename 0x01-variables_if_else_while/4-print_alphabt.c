#include <stdio.h>
/**
 * main - print alphabets with exception
 *
 * Return: 0 on success
 *
 * Author - Nana Obeng
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
