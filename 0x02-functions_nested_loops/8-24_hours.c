#include "main.h"
/**
 * jack_bauer - pls stop
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i <= 23; i++)
	{
		for (j = 0 ; j <= 59 ; i++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
	}
}
