#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: 0 true
 */

void print_alphabet_x10(void)
{
char alphabet;
int _x10;

for (_x10 = 0; _x10 <= 10; _x10++)
{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet\n);
}
_putchar('\n');
}
