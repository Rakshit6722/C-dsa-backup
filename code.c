// #include <stdio.h>
// int main()
// {
//     int arr1[100], n, ctr = 0;
//     int i, j, k;
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     int sum = 0;
//     for (i = 0; i < n; i++)
//     {
//         ctr = 0;
//         for (j = 0, k = n; j < k + 1; j++)
//         {
//             if (i != j)
//             {
//                 if (arr1[i] == arr1[j])
//                 {
//                     ctr++;
//                 }
//             }
//         }
//         if (ctr == 0)
//         {
//             sum = sum + arr1[i];
//         }
//     }
//     printf("\n\n");
//     printf("%d", sum);
// }
#include <stdio.h>
int main()
{
    int n;

    scanf("d", &n);
    int arr[n];
    int ans[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        ans[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 3; j + +)
            sum += arr[(i + j) % n];
        ans[i] = sum;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", ans[i]);
}