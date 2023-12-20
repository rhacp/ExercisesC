#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    //Write a program in C to merge two arrays of the same size sorted and print them in descending order.     
    int m, x[100], y[100], i, result[200], poz, j, aux, k;
    printf("max index = ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        printf("x[%d]=", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < m; i++)
    {
        printf("x[%d]=", i);
        scanf("%d", &y[i]);
    }

    for (i = 0; i < 2*m; i++)
    {
        if (i < m)
        {
            result[i] = x[i];
        }
        else
        {
            result[i] = y[i - m];
        }
    }

    for (int i = 1; i < 2*m; i++)
        if (result[i] < result[i - 1])
        {
            poz = -1;
            j = 0;
            do
                if (result[i] < result[j])
                    poz = j;
                else
                    j++;
            while ((j < i) && (poz == -1));
            aux = result[i];
            for (k = i; k > poz; k--)
                result[k] = result[k - 1];
            result[poz] = aux;
        }

    for (int i = 2 * m - 1; i > 0; i--)
    {
        printf("%d, ", result[i]);
    }
    printf("%d", result[0]);
}