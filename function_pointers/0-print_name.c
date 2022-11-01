#include <stdio.h>
/**
 * print_name - fucntion pointer to print apram
 * @name: parameter to print
 * @f: pointer to function with print logic
 */
void print_name(char *name, void (*f)(char *))
{

	if (f != NULL)
	{
	/*creat other pointer & initialize it*/
	void (*p)(char *);

	/* assing the valuo on old pointer to this one*/
	p = f;

	/*pointer points to fucntion and use char parameter to print*/
	(p) (name);
	}
}
