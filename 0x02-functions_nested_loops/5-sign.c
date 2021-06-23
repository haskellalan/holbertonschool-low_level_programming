#include "holberton.h"

/**
 * print_sign - print sign of a number
 * Return: 0 if 0, 1 if positive, -1 if negative
 * @n: value
 */

int print_sign(int n)
{
	if (n >= 1 && n <= 9)
	{
		return (1);
	}

	else (n >= -1 && n <= -9)
	{
		return (-1);
	}
}
