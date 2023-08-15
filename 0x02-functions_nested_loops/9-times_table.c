#include "main.h"
/**
 * times_table - print times table
 */
void times_table(void)
{
	int i, j, tmp;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			tmp = i * j;
			if (tmp <= 9)
				_putchar(' ');
			else
				_putchar((tmp / 10) + '0');
			_putchar((tmp % 10) + '0');
		}
		_putchar('\n');
	}
}
