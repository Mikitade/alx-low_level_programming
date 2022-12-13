#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print a random number
 *
 * Retrun Always 0 (success)
 *

**/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	/* your code goes there */
	return (0);
}	
