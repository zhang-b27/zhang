#include <stdio.h>
#define N 5

void sort(int a[], int n);

int main(void)
{
    int a[N], i;
    printf("Enter an array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, N);
    for (i = 0; i < N; i++)
    {
        printf("%5d", a[i]);
    }
    return 0;
}

void sort(int a[], int n)
{
    int tmp, i, j, k;

    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            tmp = a[i];
            a[i] = a[k];
            a[k] = tmp;
        }
    }
}