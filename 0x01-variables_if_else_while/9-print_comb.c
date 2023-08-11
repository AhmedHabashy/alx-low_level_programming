#include <stdio.h>
/**
*main - Entrey point
*Description: print comb
*Return: always 0
*/
int main(void)
{
	int i;

	putchar(48);
	for (i = 49; i < 58 ; i++)
	{
		putchar(44);
		putchar(32);
		putchar(i);
	}

	return (0);
}
