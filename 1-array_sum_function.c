#include <stdio.h>
/**
 * sum_array-main function for printing the sum of array elements
 *
 * @a:'Array Variable'
 * @n:'Size of an array variable'
 *
 * Return:Sum of array
 */
int sum_array(int a[], int n)
{
	int i, sum = 0;
	
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return (sum);
}
