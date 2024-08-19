#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr1[n], arr2[m], res[n + m];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        res[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        res[k] = arr2[j];
        j++;
        k++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}