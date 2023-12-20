#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for getting matrix min.
	int m, n, i, j, a[40][30], minValue = 0;
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
			if (a[i][j] < minValue)
				minValue = a[i][j];
	}
	printf("\n");

	printf("The max value of the matrix is: %d", minValue);
}