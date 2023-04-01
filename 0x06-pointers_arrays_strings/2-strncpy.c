#include"main.h"

/**
 *_strncpy - function taht concatincate strings
 *@dest: a string variable
 *@src: a string variable
 *@n: integer variable
 *Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c1;

	for (c1 = 0; c1 < n && src[c1] != '\0'; c1++)
		dest[c1] = src[c1];

	while (c1 < n)
	{
		dest[c1] = '\0';
		c1++;
	}

	return (dest);

}
