#include "main.h"
/**
*main - Entrey point
*Description: print string
*Return: always 0
*/
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
