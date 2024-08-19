// #include <stdio.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i <= n - 2; i++)
//     {
//         for (int j = 0; j <= n - 2; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// Character

// #include <stdio.h>

// int main()
// {

//     char ch;
//     scanf("%c", &ch);
//     int arr[ch];

//     for (int i = 0; i < ch; i++)
//     {
//         scanf("%c", &arr[ch]);
//     }

//     for (int i = 0; i <= ch - 2; i++)
//     {
//         for (int j = 0; j <= ch - 2; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < ch; i++)
//     {
//         printf("%c ", arr[i]);
//     }

//     return 0;
// }

// bubble sort optimization

// #include <stdio.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i <= n - 2; i++)

//     {
//         int checkswap = 0;
//         for (int j = 0; j <= n - 2 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 checkswap = 1;
//             }
//         }
//         if (checkswap == 0)
//         {
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// time complexity = O(n^2)
// space complexity = O(1)

// there are ten student in school
// 543 1101 998 1015 663 999

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 2; i++)

    {
        int checkswap = 0;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                checkswap = 1;
            }
        }
        if (checkswap == 0)
        {
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("roll no = %d",arr[n/2-1]);

    return 0;
}
