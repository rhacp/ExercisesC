#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program for subtraction of matrices.
	int m, n, i, j, a[40][30], b[40][30], c[40][30];
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &b[i][j]);
		}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			c[i][j] = a[i][j] - b[i][j];
	}
	printf("\n");

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
}