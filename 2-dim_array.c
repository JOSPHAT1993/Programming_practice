#include <stdio.h>


int main(void)
{
	int  a[3][7] = {{30.0, 60.0, 50.0, 70.0, 90.0, 80.0, 75.0}, {65.0, 60.0, 90.0, 50.0, 50.0, 60.0, 60.0}, {50.0, 64.0, 58.0, 60.0, 50.0, 60.0, 50.0}};
	int i, j;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	float mean1 = 0;
	float mean2 = 0;
	float mean3 = 0;

	/** printf("Enter Marks of 5 students for seven subjects\n");
	  * for (i = 0; i < 3 ; i ++)
	  *	{
	  *	for (j = 0; j < 7; j++)
	  *	{
	  * 		scanf("%d", &a[i][j]);
	  *	}
	  *  }
	  */  
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if ( j != 6)
			{
				printf("%d", a[i][j]);
				printf(", ");
			}
			else
			{
				printf("%d", a[i][j]);
			}
			if (i == 0)
			{
				sum1 = sum1 + a[0][j];
			}
			else if (i == 1)
			{
				sum2 = sum2 + a[1][j];
			}
			else
			{
				sum3 = sum3 + a[2][j];
			}
		}
		if (i == 0)
		{
			printf(" Sum=%d", sum1);
		}
		else if (i == 1)
		{
			printf(" Sum=%d", sum2);
		}
		else
		{
			printf(" Sum=%d", sum3);
		}
		printf("\n");
	}
	return (0);
}
