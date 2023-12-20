#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting the matrix average value on each row.
	int m, n, i, j, a[40][30];
	float avg = 0;
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			avg += a[i][j];
		}
		printf("The average on the column %d is: %f \n", i + 1, avg / n);
		avg = 0;
	}
}