/**
 * print_triangle - print a diagonal lines
 *@size: size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				putchar(' ');

			for (j = 0; j < i; j++)
				putchar('#');

			if (i == size)
				continue;

			putchar('\n');
		}
	}

	_putchar('\n');
}
