#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: on success 1
 *
 * Author - Nana Obeng
 */
void print_alphabet(void)
{
	int num;

	for (num = 97; num <= 122; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
