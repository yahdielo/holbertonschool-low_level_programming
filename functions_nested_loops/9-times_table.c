/**
 *print_last_digit - print las digit
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int n, m, p;
	
	for (n = 0; n <= 9; n++)
	{
		_puthar(n);
		
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			
			p = n * m;
			
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
