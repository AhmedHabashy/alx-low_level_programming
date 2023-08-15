#include "main.h"
/**
 * print_sign - checks if the number is greater smaller or equals to zero
 * @n: inputed number
 * Return: 1 +ve ,0 if n is 0, -1 -ve
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
