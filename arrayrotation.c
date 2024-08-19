// #include<stdio.h>

// int main(){

//     int n;
//     scanf("%d",&n);
//     int k;
//     scanf("%d",&k);
//     int arr[n];

//     for(int i=0; i <n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n] = arr[i];
//     }

    

//     for(int i=0;i<n;i++){
//         printf("%d ",temp[i]);
//     }

//     return 0;
// }

//right rotation
// #include<stdio.h>

// int main(){

//     int n,k;
//     scanf("%d",&n);
//     int arr[n],temp[n];
//     scanf("%d",&k);

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         temp[(i+k)%n]=arr[i];
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",temp[i]);
//     }

//     return 0;
// }

#include<stdio.h>

int main(){

    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);

    int arr[n], temp[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }

    return 0;
}