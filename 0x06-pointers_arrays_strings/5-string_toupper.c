#include "main.h"

/**
 * string_toupper -> converting any string to uppercase
 * @ch: pointer to char
 * Return: char
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + I) != '\0')
	{
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
			*(ch + i) = *(ch + i) - ' ';
		i++;
	}
	return (ch);
}
