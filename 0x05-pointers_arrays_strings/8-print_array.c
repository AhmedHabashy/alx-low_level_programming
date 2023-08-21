#include "main.h"
/**
 * print_array - prints array elements
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (a[i] != '\0')
		i++;
	for (j = n; j < i - 1; j++)
	{
		printf("%d", a[j]);
		if (j != i - 2)
		{
		printf(",");
		printf(" ");
		}
	}
}
