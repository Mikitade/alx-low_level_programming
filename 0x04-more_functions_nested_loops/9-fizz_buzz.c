#include "main.h"
#include <stdio.h>

/**
 * Fizz-Buzz -> printing to 100
 *
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if (x == 100)
			printf("Buzz");
		for (x % 3 == 0 && x % == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	print("\n");
}

