#include "main.h"
/**
 * _strcpy - copy string to string
 * @dest: pointer
 * @src: pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
