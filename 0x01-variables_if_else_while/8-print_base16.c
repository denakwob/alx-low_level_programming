#include <stdio.h>
/**
 * main - print hex in lowercase
 *
 * Return: 0 on success
 *
 * Author - Nana Obeng
 */
int main(void)
{
	int a;
	int b;
	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}	
