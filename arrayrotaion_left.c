// #include<stdio.h>

// int main(){

//     int n;
//     scanf("%d",&n);
//     int k;
//     scanf("%d",&k);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<k;i++){
//         int first,j;
//         first = arr[0];
//         for( j=0;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//         arr[j] = first;

//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; i++)
    {
        int j, first;
        first = arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[j] = first;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}