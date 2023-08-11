#include <stdio.h>
/**
*main - Entrey point
*Description: small then big
*Return: always 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
