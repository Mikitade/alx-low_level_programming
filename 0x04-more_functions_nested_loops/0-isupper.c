#include "main.h"

/**
 * _isupper -> this function is s function to check upper case alphas
 * @c: an integer paramer
 *
 * Return: something but success
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = '0';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
