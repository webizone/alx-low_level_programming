#include "main.h"
/**
 * swap_int - swap numbers function
 *
 * @a: integer
 *
 * @n: integer
 *
 * Return: nothing
 */


void swap_int(int *a, int *b)

{

	int temp;



	temp = *a;

	*a = *b;

	*b = temp;

}
