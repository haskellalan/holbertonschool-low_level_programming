#include <stdio.h>
/**
 * main - Start function print alphabet without specific letters
 *Return: end function
 */
int main(void)
{
char az;

for (az = 'a'; az <= 'z'; az++)
{
if (az == 'q' || az == 'e')
{
continue;
}
else
putchar(az);
}
putchar('\n');
return (0);
}
