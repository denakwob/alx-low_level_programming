#include <stdio.h>

/**
 * main - prints name of programme
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%3s\n", argv[i]);
	}
	return (0);
}
