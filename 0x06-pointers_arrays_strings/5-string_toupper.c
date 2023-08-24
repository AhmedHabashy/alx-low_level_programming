#include "main.h"
/**
 * string_toupper - to uppercase
 * @c: string
 * Return: string
 */
char *string_toupper(char *c)
{
	int i, count;

	i = 0;
	while (c[i] != '\0')
		i++;
	for (count = 0; count < i; count++)
	{
		if (c[count] >= 'a' && c[count] <= 'z')
			c[count] = c[count] - 32;
		else
			continue;
	}
	return (c);
}
