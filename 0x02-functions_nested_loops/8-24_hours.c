#include "holberton.h"

/**
 *jack_bauer - main function
 *Return: return 0 to end function
 *
 */

void jack_bauer(void)
{
	int minute;
	int minute2;
	int hour;
	int hour2;

	for (hour = '0'; hour < '2'; hour++)
	{
		for (hour2 = '0'; hour2 <= '3'; hour2++)
		{
			for (minute = '0'; minute <= '5'; minute++)
			{
				for (minute2 = '0'; minute2 <= '9'; minute2++)
				{
					_putchar(hour);
					_putchar(hour2);
					_putchar(':');
					_putchar(minute);
					_putchar(minute2);
					_putchar('\n');
				}
			}
		}
	}
}
