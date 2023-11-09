#include "function_pointers.h"

/**
 * print_name - prints the name passed to it
 * @name: the name
 * @f: the function
 *
 * Author - Nana Obeng
 */

void print_name(char *name, void (*f)(char *))
{
	name = malloc(sizeof(char) * (_strlen(name) + 1));
	f(name);
}

/**
 * f - prints the name passed to it
 * @name: name
 */

void f(char *name)
{
	int i;
	int n;

	n = _strlen(name);

	for (i = 0; i < n; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - returns the len of a string
 * @string: string
 *
 * Return: count
 */

int _strlen(char *string)
{
	int count;

	count = 0;
	while (string[count] != '\0')
	{
		count++;
	}
	return (count);
}
