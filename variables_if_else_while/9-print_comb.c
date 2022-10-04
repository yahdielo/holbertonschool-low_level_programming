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
		if(i == 9)
			break;
		putchar(i);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
