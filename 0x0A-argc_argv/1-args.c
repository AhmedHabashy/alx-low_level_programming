#include <stdio.h>
/**
 * main - prints num of args
 * @argc: count
 * @argv: values
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", (argc - 1));

	return (0);
}
