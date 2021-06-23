#include "holberton.h"

/**
 * _abs - print absolute value of the integer
 * Return: end the function
 *@n: Value
 */

int _abs(int n)
{
	int negative = (-1);

	if (n < 0)
	{
		n = n * negative;
		return (n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
		return (n);
}
