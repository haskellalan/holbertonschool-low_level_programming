#include <stdio.h>
#include <holberton.h>
/**
 *main - function to print alphabet
 *Return: end function
 */

void print_alphabet(void)
{
	char alphabet = 'a';
	char n = '\n';

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

putchar(alphabet);
putchar(n);
return;
}
