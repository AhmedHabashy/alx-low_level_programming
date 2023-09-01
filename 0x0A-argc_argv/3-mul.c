#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul numbers
 * @argc: count
 * @argv: vale
 * Return: 0 correct 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	return (0);
}
