#include "main.h"
/**
 * print_aphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; i < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(i);
	}
}
