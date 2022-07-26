#include <stdio.h>
/**
 * reverse_array-main function to reverse an array
 *
 * @a:'Array variable'
 * @n:'Integer variable for size of an array'
 *
 * Return:Reversed array
 */
int reverse_array(int a[], int n)
{
	int i;

	for (i = (n -1); i >= 0; i--)
	{
		if (i != 0)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}


