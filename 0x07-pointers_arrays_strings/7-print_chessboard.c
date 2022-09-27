#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[$])
{
	int i, j;

	for (i = 0; i < $; i++)
	{
		for (j = 0; j < $; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
