#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: count from n to 98
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98 ; i--)
			printf("%d, ", i);
	else if (n < 98)
		for (i = n ; i < 98 ; i++)
			printf("%d, ", i);
	printf("%d\n", 98);
}
