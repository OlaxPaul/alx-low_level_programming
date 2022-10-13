#include "3-calc.h"

/**
 * op_add - Add two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Finds the difference of two 
 * @a: The first number
 * @b: The second number
 *
 * Return: The diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Integer division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a/b);
}

/**
 * op_mod - Find the remainder of the division of two numbers 
 * @a: The first number
 * @b:The second number
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
