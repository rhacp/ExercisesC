#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Write a program in C to separate odd and even integers into separate arrays. 
	int m, x[100], odd[100], even[100], oddCounter = 0, evenCounter = 0;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < m; i++)
	{
		if (x[i] % 2 == 1)
		{
			odd[oddCounter] = x[i];
			oddCounter++;
		}
		else
		{
			even[evenCounter] = x[i];
			evenCounter++;
		}
	}
	printf("Even numbers: ");
	for (int i = 0; i < evenCounter - 1; i++)
	{
		printf("%d, ", even[i]);
	}
	printf("%d\n", even[evenCounter - 1]);
	printf("Odd numbers: ");
	for (int i = 0; i < oddCounter - 1; i++)
	{
		printf("%d, ", odd[i]);
	}
	printf("%d\n", odd[oddCounter - 1]);
}