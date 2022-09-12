#include <stdio.h>

/**
 * main - A program that prints all single digit numbers of base 10
 *
 * Description: To print single digits of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putcharf("\n");

	return (0);
}
