#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10.
 *
 * Description: "To print all single digits of base 10 using putchar"
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{

		putchar(n);

	}

	putchar('\n');

	return (0);
}
