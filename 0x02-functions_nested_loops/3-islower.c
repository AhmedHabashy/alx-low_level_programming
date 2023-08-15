#include "main.h"
/**
 * _islower - checks if a char is lower case
 * Description: (c) is checked if it lies between small a and small z
 * Return: 1 for success 0 for failier
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
