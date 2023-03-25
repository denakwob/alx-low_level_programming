#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random numbers
 * @n: the variabe that is assigned the random value
 * Return: 0 upon success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if( n > 0)
	  {
	    printf("%d is positive\n", n);
	  }
	else if( n < 0)
	  {
	    printf("%d is negative\n", n);
	  }
	else
	  {
	    printf("%d is zero\n");
	  }
	return (0);
}