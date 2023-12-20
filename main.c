#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Return the matrix overall average
float matrixAverage(int a[40][30], int m, int n)
{
	float avg = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			avg += a[i][j];
		}
	}
	float result = (avg / (m * n));

	return result;
}

//Print each matrix column average
void matrixColumnAverage(int a[40][30], int m, int n)
{
	float avg = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			avg += a[j][i];
		}
		printf("The column %d average is: %f\n", i, avg / m);
		avg = 0;
	}
}

//Return the matrix overall sum
int matrixSum(int a[40][30], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
	}

	return sum;
}

//Check how many times element in matrix
int matrixElementCounter(int a[40][30], int m, int n, int element)
{
	int counter = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == element)
				counter++;
		}
	}

	return counter;
}

//Check if element is in matrix
void matrixIsElementPresent(int a[40][30], int m, int n, int element)
{
	int counter = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == element)
			{
				printf("The element is in the matrix.\n");
				break;
			}
		}
		break;
	}
}

//Print array average

void main()
{
	int m, n, i, j, a[40][30], b[30][40], menuHelp = 1;
	printf("m="); scanf("%d", &m);
	printf("n="); scanf("%d", &n);

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}

	do
	{
		printf("MENU\n");
		printf("--------\n");
		printf("1. Return matrix general average\n");
		printf("2. Return matrix columns average.\n");
		printf("3. Return matrix element sum.\n");
		printf("4. Check how many time an element is in matrix.\n");
		printf("5. Check if an element is in a matrix.\n");
		printf("5. Check if an element is in a matrix.\n");
		printf("6. Return array average.\n");
		printf("7. Return array values over a given number.\n");
		printf("8. Check if an element is in part of an array.\n");
		printf("9. Sort array.\n");
		printf("10. Return array elements smaller than a given number.\n");
		printf("0. Exit.\n");
		printf("Choose a value: "); scanf("%d", &menuHelp);
		printf("\n");
		switch (menuHelp)
		{
		case 1: printf("%f\n", matrixAverage(a, m, n));
		case 2: 
		{
			matrixColumnAverage(a, m, n);
			printf("\n");
		}
		case 3: printf("%d\n", matrixSum(a, m, n));
		case 4: 
		{
			int element;
			printf("Choose an element: "); scanf("%d", &element);
			printf("\n");
			printf("%d\n", matrixElementCounter(a, m, n, element));
		}
		case 5: 
		{
			int element;
			printf("Choose an element: "); scanf("%d", &element);
			printf("\n");
			matrixIsElementPresent(a, m, n, element);
		}
		//case 6:
		//case 7:
		//case 8:
		//case 9:
		//case 10:
		}

	} while (menuHelp != 0);
}