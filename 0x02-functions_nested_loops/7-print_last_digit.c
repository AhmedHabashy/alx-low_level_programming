#include "main.h"
/**
 * print_last_digit - the name explains every thing
 * @n: inputed number
 * Return: always 0
 */
int print_last_digit(int n)
{
	n = n % 10;

	_putchar(n);

	return (n);
}
