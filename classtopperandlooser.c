#include <stdio.h>
#include<limits.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++ )
    {
        scanf("%d", &arr[i]);
    }

    // second largest element
    int max1 = 0;
    int max2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2)
        {
            max2 = arr[i];
        }
    }

    printf("%d\n",max2);

    //second smallest number
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min1){
            min1 = min2;
            min1 = arr[i];
        }
        else if(arr[i]>min1 && arr[i]<min2){
            min2 = arr[i];
        }
    }

    printf("%d\n",min2);
    int diff = max2 - min2;
    printf("%d",diff);
    return 0;
}