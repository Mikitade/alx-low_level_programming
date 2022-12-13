#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * Return Always 0 (success)
*/
int main(void)
{
		int n;
		int x;

                srand(time(0));
                n = rand() - RAND_MAX /2;
                x = n % 10;
		printf("Last digit of %d is %d ", x,n);
		
		if (x > 5)
		{
			printf(" and is greater than 5");
		}
		if (x == 0)
		{
			printf("and 0");
		}
		if (x < 6 && X != 0)
		{
			printf("and is less than 6 and not 0");
		}
		printf("\n");
	        return (0);
}
