#include"main.h"

/**
 *_strncat - function taht concatincate strings
 *@dest: a string variable
 *@src: a string variable
 *@n: an intger variable
 * Return: a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int  c1, c2;

	c1 = 0;

	while (dest[c1])
		c1++;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c1 + c2] = src[c2];

	dest[c1 + c2] = '\0';

	return (dest);

}
