#include <stdio.h>

int main(void)
{
	int i, j, k, rows;
	rows = 5;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= ((2 * i) - 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = rows - 1; i >= 1; i--)
	{
		for (j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= ((2 * i) - 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
