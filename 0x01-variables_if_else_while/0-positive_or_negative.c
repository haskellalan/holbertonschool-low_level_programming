#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - print number and if it positive, negative or zero
 *Return: end code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is %s\n", n, "positive");
	else if (n < 0)
	printf("%d is %s\n", n, "negative");
	else
	printf("%d is %s\n", n, "zero");
	return (0);
}
