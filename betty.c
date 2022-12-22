#include <stdio.h>

/**
 * factorial - calculates the factorial of numbers.
 * @n: the numbrer to be factorialized.
 * Return: the factorial value.
 */
unsigned int factorial(unsigned int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
