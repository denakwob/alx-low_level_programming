#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs addition
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 upon success
 * Author - Nana Obeng
 */

int main(int argc, char *argv[])
{
	int i;
	long sum = 0, num;
	char *ptr;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &ptr, 10);
			if (*ptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%ld\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
