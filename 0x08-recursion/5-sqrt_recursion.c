#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number for which natural square root should be found.
 *
 * Retunn: natural square root n
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
