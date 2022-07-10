#include <stdio.h>
/**
 * main-entry point to print two right angled triangle
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i, j, rows;
	rows = 10;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = rows - 1; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}

