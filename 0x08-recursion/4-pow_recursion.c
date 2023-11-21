#include "main.h"
/**
  * _pow_recursion - function name
  * @x: parameter 1
  * @y: parameter 2
  * Return: value of a given number passed to the function
  */

int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)		/*if y is a negative number, return -1*/
		return (-1);
	else if (y == 0)	/*x to the power of 0 is 1*/
		return (1);
	else if (y % 2 == 0)	/*if y is an even number*/
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else			/*if y is odd*/
		return (x * _pow_recursion(x, y - 1));
}
