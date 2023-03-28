#include "main.h"
/**
 * main - prints _putchar
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = "_putchar \n";
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}

int _putchar(char c)
{
        return (write(1, &c, 1));
}
