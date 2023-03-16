#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d bytes(s)\n", Sizeof(char));
printf("Size of a long long int: %d bytes(s)\n", Sizeof(long long int));
printf("Size of a long int: %d bytes(s)\n", Sizeof(long int));
printf("Size of a int: %d bytes(s)\n", Sizeof(int));
printf("Size of a float: %d bytes(s)\n", Sizeof(float));
return (0);
}
