#include <stdio.h>
/**
 * main - prints file name
 * @argc: count of argv
 * @argv: passed arguments
 * Return: always 0
 */
void main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
