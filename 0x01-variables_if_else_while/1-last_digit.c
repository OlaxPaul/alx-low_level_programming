#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program is to assign a random number to variable n
 * each time it is executed.
 * Description: "Assign random number to variable n each time it is executed."
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last).
	}
	else if (last = 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if ((last != 0) && (last < 6))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
