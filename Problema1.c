#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Program to check if two matrices are identical.
	int m, n, i, j, a[40][30], b[40][30], help = 0;
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%f", &a[i][j]);
		}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("b[%d][%d]=", i, j);
			scanf("%f", &b[i][j]);
		}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] != b[i][j])
				help = 1;

	if (help == 1)
		printf("The matrix are not equals.");
	else
		printf("The matrix are equals.");
}
