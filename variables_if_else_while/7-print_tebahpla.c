#include <stdio.h>
/**
 * main - Print alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare var */
	char al;

	/*print from z o a*/
	for (al = 'z'; al >= 'a'; al--)
	{
	putchar(al);
	}
	putchar('\n');

	return (0);
}
