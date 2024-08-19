#include <stdio.h>
#include<limits.h>
#include<float.h>

int main()
{

    // // int n;
    // // scanf("%d",&n);
    // // int arr[n];

    // // for(int i = 0; i < n; i++){
    // //     scanf("%d",&arr[i]);
    // // }
    // // for(int i = 0; i < n; i++){
    // //     printf("%d ",i[arr]);
    // // }
    //  int a,b;

    //  scanf("%d",&a);
    //  scanf("%d",&b);

    //  if(a>b){

    //         int temp = a;
    //         a = b;
    //         b = temp;

    //         printf("a = %d\n",a);
    //         printf("b = %d",b);

    //     }
    // float max_element=FLT_MIN;
    // float min_element=FLT_MAX;
    // int n;
    // scanf("%d", &n);
    // float arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%f", &arr[i]);
    // }
    
    // for(int i = 0; i<n; i++){
        
    //     if(arr[i]>max_element){
    //         max_element = arr[i];
    //     }
    //     if(arr[i]<min_element){
    //         min_element= arr[i];
    //     }
        

    // }
    // printf("%.1f\n",max_element);
    // printf("%.1f",min_element);

    // int n;
    // scanf("%d",&n);
    // int arr[n];
    
    // for(int i = 0; i<n; i++){
    //     scanf("%d",&arr[i]);

    // }

    // for(int i = 0; i<n-1; i++){
    //     for(int j = 0; j < n - i; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    //     for(int i = 0; i<n; i++){
    //     printf("%d ",arr[i]);

    // }

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);

    return 0;
}