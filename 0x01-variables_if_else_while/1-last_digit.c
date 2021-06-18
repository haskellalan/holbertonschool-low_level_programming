#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** more headers goes there
 *
 */

int main(void)
{
  int n,_0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        _0 = n % 10;

	if (_0 > 5)
	{
	  printf("Last digit of %d is %d and is greater than 5\n", n, _0);
	}
	else if (_0 == 0)
	{
	  printf("Last digit of %d is %d and is 0\n", n, _0);
	}
	else if (_0 < 6 && _0 != 0)
	{
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, _0);
	}
	return (0);
}
