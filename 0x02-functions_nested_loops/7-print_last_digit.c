#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: is the int that will use for argument of the function
 * Return: integer value
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
