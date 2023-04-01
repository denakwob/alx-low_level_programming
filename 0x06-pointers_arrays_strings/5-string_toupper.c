#include"main.h"

/**
 *string_toupper - function that change string to uppercase
 *@str: a string variable
 * Return: string
*/

char *string_toupper(char *str)
{
	int c1;

	for (c1 = 0; str[c1] != '\0'; c1++)
	{
		if (str[c1] >= 97 && str[c1] <= 122)
			str[c1] = str[c1] - 32;
	}
	return (str);
}
