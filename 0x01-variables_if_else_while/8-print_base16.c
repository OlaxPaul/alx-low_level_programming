#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Description: To print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; ch++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
