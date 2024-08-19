#include<stdio.h>

int main(){

    int n,j;
    scanf("%d",&n);
    scanf("%d",&j);

    int arr[n][n];
    int res[m];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            if(arr[i+j]==res[i]){
                printf("%d ",arr[i][j]);
            }
        }
    }
    

    return 0;
}