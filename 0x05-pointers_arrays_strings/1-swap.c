#include "main.h"
/**
 * swap_int - substitute two integers together
 * @a: num1
 * @b: num2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
