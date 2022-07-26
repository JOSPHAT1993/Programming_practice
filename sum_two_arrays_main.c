#include <stdio.h>
#include "sum_two_arrays.c"
#include "1-array_sum_function.c"
/**
 * main- Entry Function
 *
 * @void:'Return Null'
 *
 * Return: Sum of arrays from function
 */
int main(void)
{
	int i;
	int a[] = {30, 50, 40, 20, 90};
	int b[] = {40, 80, 70, 100, 85};
	int s = sizeof(a)/sizeof(a[0]);

	sum_two_arrays(a, b, s);

	for (i = 0; i <= 42; i++)
	{
		printf("_");
	}
	printf("\n");

	printf("the sum of the Elements in Array A is: %d\n", sum_array(a, s));
	printf("The sum of the Elements in Array B is: %d\n", sum_array(b, s));
	
	return (0);
}
