#include<iostream>
using namespace std;

void Sort(int arr[], int n){
    int left = 0, right = n-1;

    while(left<right){
        while(arr[left] == 0){
            left++;
        }
        while(arr[right] == 1){
            right--;
        }
        if(left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[8] = {0,1,0,0,1,1,0,0};

    Sort(arr, 8);
    printArray(arr, 8);
}