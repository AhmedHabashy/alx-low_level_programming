#include <stdio.h>
/**
*main - Entrey point
*Description: alpha except q and e
*Return: always 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123 ; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');

	return (0);
}

