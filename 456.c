#include <stdio.h>
#define N 10

void sort(int a[], int n);

int main(void)
{
    int a[N], max, i;
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
    int tmp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
}