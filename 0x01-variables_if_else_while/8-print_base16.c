#include <stdio.h>
/**
*main - start function print base16 characters
*Return: end function
*/

int main(void)
{
int n0 = '0';
int n = '\n';
int az = 'a';
for (n0 = '0'; n0 <= '9' ; n0++)
putchar(n0);
for (az = 'a'; az <= 'f'; az++)
putchar(az);
putchar(n);
return (0);
}
