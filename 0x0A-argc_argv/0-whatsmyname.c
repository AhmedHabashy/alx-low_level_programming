#include <stdio.h>
/**
 * main - prints file name
 * @argc: count of argv
 * @argv: passed arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
