#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n,
 * else -1 if it doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}

/**
 * sqrt_helper - helper function to perform the recursive calculation
 * @n: number
 * @start: starting point for search
 * @end: ending point for search
 * Return: natural square root of n,
 * else -1 if it doesn't have a natural square root
 */

int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid < n)
		{
			return (sqrt_helper(n, mid + 1, end));
		}
		else
		{
			return (sqrt_helper(n, start, mid - 1));
		}
	}

	return (-1);
}
