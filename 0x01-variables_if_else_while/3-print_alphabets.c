#include <stdio.h>
/**
 * main - prints uppercase and lowercase alphabets
 * @a: for first for loop
 * @b: for second for loop
 *
 * Return: 0 for success
 *
 * Author - Nana Obeng
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 65; b <= 90; b++)
	{
		puthchar(b);
	}
	putchar('\n');
	return (0);
}
