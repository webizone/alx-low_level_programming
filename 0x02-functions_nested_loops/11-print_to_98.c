#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers
 * @n: variable
 * Return: no return
 */
void print_to_98(int n)

{
	if (n < 98)

	{

		while (n <= 98)

		{

			printf("%d", n);

			if (n != 98)

			{

				printf(", ");

			}

			n++;

		}

	}

	else if (n > 98)

	{

		while (n >= 98)

		{

			printf("%d", n);

			if (n != 98)

			{
				printf(", ");

			}

			n--;

		}

	}

	else
	{

		printf("98");

	}

	printf('\n');

}
