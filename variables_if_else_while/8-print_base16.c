#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints all numbers from base 16
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int le;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	}

	for (le = 'a'; le <= 'f'; le++)
	{
	putchar(le);
	}

	putchar('\n');

	return (0);
}
