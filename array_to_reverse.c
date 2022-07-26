#include <stdio.h>
#include "reverse_array.c"
/**
 * main-function entry with array to be reversed
 *
 * @void:'Null Return'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[] = {30, 20, 50, 70, 100};
	int q[] = {40, 90, 100, 1000, 5000, 5555, 6000, 500};
	int s = sizeof(p)/sizeof(p[0]);
	int n = sizeof(q)/sizeof(q[0]);
	
	int i;

	printf("Array 1 before reversing is:\n");
	for (i = 0; i < s; i++)
	{
		if ( i < s - 1)
		{
			printf("%d", p[i]);
			printf(", ");
		}
		else
		{
			printf("%d", p[i]);
			printf("\n");
		}
	}
	printf("\n");
	printf("Array 1 after Reversing:\n");
	reverse_array(p, s);
	printf("\n\nArray 2 before Reversing is:\n");
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d", q[i]);
			printf(", ");
		}
		else
		{
			printf("%d", q[i]);
			printf("\n");
		}
	}
	printf("\nArray 2 after reversing it:\n");
	reverse_array(q, n);

	return (0);	
}
