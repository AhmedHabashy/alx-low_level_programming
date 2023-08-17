#include "main.h"
/**
 * _isdigit - checks if an input is digit
 * @c: input to function
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
