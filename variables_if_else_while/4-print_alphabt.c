#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print alphabet exclude q & e
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' || ch != 'q')
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}
