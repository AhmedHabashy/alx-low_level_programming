#include "main.h"
/**
 * _islower - checks if a char is lower case
 * @c: input of the function
 * Return: 1 for success 0 for failier
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
