#include <stdio.h>
/**
 * main-Entry function
 *
 * @void:'Accepting null declaration'
 *
 * Return:ALways 0 (Success)
 */
int main(void)
{
	int i, j, k, r;
	r = 10;

	for (i = 1; i <= r; i++)
	{
		for (j = 1; j <= r - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
