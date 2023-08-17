#include "main.h"
/**
 * print_diagonal - prints diag
 * @n: number of lines
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
		putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n ; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
