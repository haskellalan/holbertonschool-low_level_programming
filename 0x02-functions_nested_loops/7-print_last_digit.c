#include "holberton.h"

/**
 * print_last_digit - print last digit of integer n
 * Return: ends the function
 * @n: value
 */

int print_last_digit(int n)
{
	int num = n % 10;

	_putchar(num);
}
