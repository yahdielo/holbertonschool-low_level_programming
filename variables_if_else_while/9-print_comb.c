#include <stdio.h>
/**
 * main - Print combination of single digits acending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i <= 9)

		putchar(',');
		putchart(' ');
	}

	putchar('\n');

	return (0);
}
