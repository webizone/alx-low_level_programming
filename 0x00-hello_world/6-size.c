#include <stdio.h>
/**
 * main - prints the size of data types
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long: %d byte(s)\n", sizeof(long));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	
	return (0);
}
