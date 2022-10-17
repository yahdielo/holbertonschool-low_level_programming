#include "main.h"
/**
 *  print_chessboard - prints chessboard
 * @a: variable
 */
void print_chessboard(char (*a)[8])
{
	int n, y;

	for (n = 0; n < 8; n++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[n][y]);
		}

		_putchar('\n');
	}
}
