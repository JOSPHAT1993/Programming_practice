#include <stdio.h>
/**
 * rev_array-main function for reversing an array elements
 *
 * @a:'Array variable'
 * @n:'Integer varibale for array size'
 *
 * Return:Reversed array elements
 */
int rev_array(int a[], int n)
{
	int i, r;

	for (i = 0; i < (n / 2); i++)
	{
		r = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = r;
	}
}

