#include <stdio.h>
/**
*main - start function print number combinations from 0 to 9 with , and spaces
*Return: end function
*/

int main(void)
{
int n0 = '0';

for (n0 = '0'; n0 <= '9'; n0++)
{
putchar(n0);
if (n0 != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
