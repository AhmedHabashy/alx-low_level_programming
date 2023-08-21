#include "main.h"
/**
 * _puts - prints a string
 * @str: the address of the string to be printed
 */
void _puts(char *str)
{
	char l;

	l = '\n';
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &l, 1);
}
