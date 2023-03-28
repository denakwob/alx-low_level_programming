#include "main.h"
/**
 * main - prints _putchar
 * _putchar - writes the character c to stdout
 *
 * Return: On success 0.
 *
 * Author - Nana Obeng
 */

int main(void)
{
	/*this creates an array to store the characters as char*/
	char str[] = "_putchar\n";
	/*type of array length*/
	int i;
	/*loops through array and prints each char until EOA*/
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
