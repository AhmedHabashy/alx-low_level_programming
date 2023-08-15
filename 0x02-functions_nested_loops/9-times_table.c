#include "main.h"
/**
 * times_table - print table
 */
void times_table(void)
{
	int num, tim, res;

	for (num = 0 ; num <= 9 ; num++)
	{
		_putchar('0');
		for (tim = 1 ; tim <= 9; tim++)
		{
			_putchar(',');
			_putchar(' ');

			res = num * tim;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
