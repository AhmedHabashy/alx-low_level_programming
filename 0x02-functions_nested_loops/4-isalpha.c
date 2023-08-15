#include "main.h"
/**
 * _isalpha - checks if c is an alphabet char
 * @c: function input chat
 * Return: 1 success 0 fail
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
