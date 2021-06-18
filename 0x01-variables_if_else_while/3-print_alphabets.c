#include <stdio.h>

/**
 *main - print alphabet
 *Return: end function
 */

int main(void)
{
char aZ;
char n = '\n';

for (aZ = 'a'; aZ <= 'z'; aZ++)
putchar(aZ);

for (aZ = 'A'; aZ <= 'Z'; aZ++)
putchar(aZ);

putchar(n);
return (0);
}
