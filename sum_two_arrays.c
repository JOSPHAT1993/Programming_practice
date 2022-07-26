#include <stdio.h>
/**
 * sum_two_arrays-main function for summing array elements
 *
 * @p:'Array variable'
 * @q:'Array varibale'
 * @n;'Size of array variable'
 *
 * Return:Return the sum of arrays
 */
int sum_two_arrays(int p[], int q[], int n)
{
	int c[n];
	int i;

	for (i = 0; i < n; i++)
	{
		c[i] = p[i] + q[i];
		printf("The sum of arrays Elements at index %d is: %d\n", i, c[i]);
	}
}
