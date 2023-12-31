#include "main.h"
/**
 * create_array - creates an array of a size size
 * @size: size of the array
 * @c: char to assign
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

