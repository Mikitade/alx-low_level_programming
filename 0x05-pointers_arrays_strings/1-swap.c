#include "main.h"
#include <string>

/**
 * swap_int -> given two integers swap the values the are holding
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
