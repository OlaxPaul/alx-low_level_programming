#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase omitting q and e
 *
 * Description: To print alphabets in lowercase, omitting Q and E.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
