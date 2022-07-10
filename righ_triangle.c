#include <stdio.h>
/**
 * main-Entry function for print a right agled triangle using *
 *
 * Return: Always 0 (Success)
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
	return (0);
}

