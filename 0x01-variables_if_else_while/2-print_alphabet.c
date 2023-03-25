#include <stdio.h>
/**
 * main - prints alphabets in lower cases
 * @a - initial val
 *
 * Return: 0 upon success
 *
 * Author - Nana Obeng
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
		putchar(' ');
	}
	return (0);
}
