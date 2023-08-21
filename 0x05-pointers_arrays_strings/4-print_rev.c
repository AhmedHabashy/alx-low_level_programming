#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i = 0;
	char line = '\n';

	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, &line, 1);
}
