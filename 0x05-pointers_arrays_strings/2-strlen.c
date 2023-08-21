#include "main.h"
/**
 * _strlen - counts number of letters in a string
 * @s: string first letter's address
 * Return: number of letters
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
