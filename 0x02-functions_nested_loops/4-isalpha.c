#include "holberton.h"

/**
 * _isalpha - function to test if c is alphanumeric
 * Return: 0 if false 1 if true
 * @c: value
 */

int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
