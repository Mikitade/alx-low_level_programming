#include "main.h"
#include <string.h>

/**
 * _strcmp -> for comparing purpose
 * @s1: param1
 * @s2: param2
 * Return: 0 if maching, and ns1 - ns2 if not maching
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
