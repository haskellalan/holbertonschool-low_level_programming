#include "holberton.h"
/**
 *main - function to print alphabet
 *Return: end function
 */

void print_alphabet(void)
{
	char alphabet;
	char n = '\n';

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
_putchar(n);
}
