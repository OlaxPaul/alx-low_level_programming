#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program is to assign a random number to variable n
 * each time it is executed.
 *
 * Description: "Assign random number to variable n each time it is executed."
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	return (0);
}
