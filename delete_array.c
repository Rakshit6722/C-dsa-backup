#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int k = n + m;
    int arr3[k];

    for(int i = 0; i < n; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0,j = n; i < m && j < k;i++,j++){
        arr3[j] = arr2[i];
    }

    for(int i = 0; i < k; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}