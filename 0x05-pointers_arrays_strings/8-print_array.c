#include "main.h"
/**
 * print_array - prints array elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("%c", '\n');
}
