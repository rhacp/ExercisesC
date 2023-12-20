#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting matrix max.
	int m, n, i, j, a[40][30], maxValue = 0;
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
			if (a[i][j] > maxValue)
				maxValue = a[i][j];
	}
	printf("\n");

	printf("The max value of the matrix is: %d", maxValue);
}