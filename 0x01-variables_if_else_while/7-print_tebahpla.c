#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Description: To print lowercase alphabets in reverse 
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{

		putchar(c);

	}

	putchar('\n');

	return (0);
}
