#include <stdio.h>
/**
 * main - Entrey point
 * Description: positive is better than negative
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
