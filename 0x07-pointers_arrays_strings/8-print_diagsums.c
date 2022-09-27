#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: a pointer
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		l += *(a + (size * i + i));
		r += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", i);
	printf("%d\n", r);
}	
