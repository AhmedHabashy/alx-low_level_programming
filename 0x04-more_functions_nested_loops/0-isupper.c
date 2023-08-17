#include "main.h"
/**
 * _isupper - checks if a char is uppercase
 * @c: inputed char
 * Return: 1 case upper 0 case lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
