#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					putchar('#');
				else
					putchar(' ');
			putchar('\n');
		}
	else
		putchar('\n');
}
