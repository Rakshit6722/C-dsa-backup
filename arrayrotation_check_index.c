#include<stdio.h>
int main()
{
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    int count = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i + 1]){
            count++;
            continue;
        }
        else{
            break;
        }
    }


    if(count == n+1){
        printf("0");
    }
    else{
        printf("%d", count);
 
    }
    return 0;
}
