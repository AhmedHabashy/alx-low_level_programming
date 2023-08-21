#include "main.h"
/**
 * puts_half - print the second half of an array
 * @str: the array
 */
void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i - 1) / 2;
	for (j = n; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
