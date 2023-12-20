#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Să se determine elementul maxim dintr-un vector și pozițiile tuturor aparițiilor sale. 
	int m, x[100], maxValue = 0;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < m; i++)
	{
		if (x[i] > maxValue)
		{
			maxValue = x[i];
		}
	}

	printf("The max value is: %d\n", maxValue);
	printf("All aparitions:\n");

	for (int i = 0; i < m; i++)
	{
		if (x[i] == maxValue)
		{
			printf("%d\n", i);
		}
	}
}