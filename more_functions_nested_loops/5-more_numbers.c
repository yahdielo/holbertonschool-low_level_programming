#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14 10 times
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int times;
	int count;

	/*loop conditions*/
	for (times = 0; times <= 9; times++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			{
				putchar((count / 10) + '0');
			putchar((count % 10) + '0');
			}
		}
	putchar('\n');
	}
}
