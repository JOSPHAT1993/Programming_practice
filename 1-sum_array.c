#include <stdio.h>
#include "1-array_sum_function.c"
/**
 * main-Entry function
 *
 * @void:'Null return'
 *
 * Return:Summed array using function
 */
int main(void)
{
	int x[] = {30, 45, 76, 81, 90, 70};
	int s= sizeof(x)/sizeof(x[0]);

	int total= sum_array(x, s);
	
	printf("The array sum is: %d\n", total);

	return (0);
}

	
