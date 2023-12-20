#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting the values between two numbers in a square matrix.
	int m, i, j, a[40][40], min, max;
	printf("m="); scanf("%d", &m);

	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	printf("min="); scanf("%d", &min);
	printf("max="); scanf("%d", &max);

	printf("Value between %d and %d in the matrix are: \n", min, max);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] < max && a[i][j] > min)
				printf("%d ", a[i][j]);
		}
	}
}