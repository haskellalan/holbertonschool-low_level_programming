#include "holberton.h"

/**
 * print_last_digit - print last digit of integer n
 * Return: ends the function
 * @n: value
 */

int print_last_digit(int n)
{
	int num = n % 10;
	
	if (num < 0)
	{
		num = num + -1;
	}
	_putchar(num + '0');
	return (num)
}
