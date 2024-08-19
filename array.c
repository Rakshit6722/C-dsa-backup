#include <stdio.h>

int main()
{

    // // int arr[10] = {1,2,3,4};
    // // for(int i=0; i<10; i++){
    // //     printf("%d\n", arr[i]);
    // // }

    // // char arr[5];

    // // for (int i = 0; i < 5; i++)
    // // {
    // //     scanf("%c", &arr[i]);
    // // }
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     printf("%c ", arr[i]);
    // // }

    // float arr[10] = {3.12, 4.11, 3.9};

    // // for (int i = 0; i < 5; i++)
    // // {
    // //     scanf("%c", &arr[i]);
    // // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%.10f ", arr[i]);
    // }


    // // int arr[10] = {1};
    // // for (int i = 0; i < 10; i++)
    // // {
    // //     printf("%d\n", arr[i]);
    // // }

    // // //scanf("%d",&arr[4]);
    // // //scanf("%d",&arr[10]);

    // // printf("%d\n",arr[0]);

    // // scanf("%d",&arr[0]);
    // // printf("%d\n",arr[0]);

    // // //printf("%d\n",arr[10]);

    // // int n;
    // // scanf("%d", &n);
    // // int arr[n];

    // // for (int ind = 0; ind < n; ind++)
    // // {
    // //     //scanf("%d", &arr[ind]);    (alternate method to access array elements)
    // //     scanf("%d", &ind[arr]);
    // // }

    // // for (int ind = 0; ind < n; ind++)
    // // {
    // //     printf("%d\t", arr[ind]);
    // }


    //reverse of an array

    int arr[5] = {1,3,4,5,8};

    int s = 0;
    int e = 5 - 1;

    while(s<=e){
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }

    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
