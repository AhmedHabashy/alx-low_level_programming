#include "main.h"
/**
 * _strcpy - copy string to string
 * @dest: pointer
 * @src: pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {

		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
