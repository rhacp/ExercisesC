#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//Sa se ordoneze un vector ordonat de dimensiune n si să se insereze o valoare dată(după inserare vectorul va rămâne ordonat).
	int m, x[100], maxValue = 0, poz, j, k, aux, value;
	printf("max index = ");
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		printf("x[%d]=", i);
		scanf("%d", &x[i]);
	}

	for (int i = 1; i < m; i++)
		if (x[i] < x[i - 1])
		{
			poz = -1;
			j = 0;
			do
				if (x[i] < x[j])
					poz = j;
				else
					j++;
			while ((j < i) && (poz == -1));
			aux = x[i];
			for (k = i; k > poz; k--)
				x[k] = x[k - 1];
			x[poz] = aux;
		}

	printf("value to insert = ");
	scanf("%d", &value);

	printf("The new array is:\n");
	for (int i = 0; i < m - 1; i++)
	{
		printf("%d, ", x[i]);
	}
	printf("%d\n", x[m - 1]);


	for (int i = 0; i < m; i++)
	{
		if (x[i] > value)
		{
			for (k = m; k >= i; k--)
			{
				x[k + 1] = x[k];
			}
			x[i] = value;
			break;
		}
	}
	printf("The new array is:\n");
	for (int i = 0; i < m; i++)
	{
		printf("%d, ", x[i]);
	}
	printf("%d", x[m]);
}