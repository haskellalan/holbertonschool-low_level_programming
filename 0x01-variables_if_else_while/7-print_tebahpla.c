#include <stdio.h>

/**
 *main - print alphabet
 *Return: end function
 */

int main(void)
{
char az = 'z';
char n = '\n';

for (az = 'z'; az >= 'a'; az--)
putchar(az);
putchar(n);
return (0);
}
