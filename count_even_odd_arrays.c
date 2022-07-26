#include <stdio.h>
/**
 * count_even_odd_elements - mainf function to count even and odd values of an array.
 *
 * @a:'Array variable'
 * @n:'Integer variable for size of array'
 *
 * Return:Counter of arrays for even and odd elements
 */
int count_even_odd_elements(int a[], int n);

/**
 * main-function entry
 *
 * @void:'Null Return'
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int m[] = {35, 40, 80, 90, 95, 83, 44, 47, 55};
	int y[] = {63, 77, 81, 97, 91, 55};
	int s = sizeof(m)/sizeof(m[0]);
	int a = sizeof(y)/sizeof(y[0]);
	
	count_even_odd_elements(m, s);
	count_even_odd_elements(y, a);

	return (0);
}
int count_even_odd_elements(int a[], int n)
{
	int p = 0; /* Counter for even numbers initialized at zero */
	int q = 0; /* Counter for odd numbers initialized at zero */
	int i;
	
	printf("The array is:\n");
	/* First print the Array using the loop */
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
		{
			printf("%d", a[i]);
			printf("\n");
		}
	}
	/* Code for counting the numbers */
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			p += 1;
		}
		else
		{
			q += 1;
		}
	}
	printf("Even Numbers in the array: %d\n", p);
	printf("Odd Elements in the array: %d\n", q);
}


