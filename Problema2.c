#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program to find transpose of a non-square matrix.
	int m, n, i, j, a[40][30], b[30][40], k, x;
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < m; i++)
	{
		for (j = 0, k = n - 1; j < n; j++)
		{
			x = k - j;
			b[x][i] = a[i][j];
		}
	}

	for (i = n - 1; i >= 0; i--) {
		for (j = 0; j < m; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}