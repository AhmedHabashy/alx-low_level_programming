#include <stdio.h>
/**
*main - Entrey point
*Description: print datatype sizes
*Return: always 0
*/
int main(void)
{
printf("Size of a char: ", sizeof(char));
printf("Size of an int: ", sizeof(int));
printf("Size of a long int: ", sizeof(long int));
printf("Size of a long long int: ", sizeof(long long int));
printf("Size of a float: ", sizeof(float));
return (0);
}
