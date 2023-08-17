#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, s;

	if (size == 0 || size < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (s = 0; s < i + 1; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
