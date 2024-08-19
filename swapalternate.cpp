

#include<iostream>
using namespace std;

void swap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}


void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {1,2,4,5,6};
    int brr[6] = {2,3,4,7,8,10};

    swap(arr,5);
    swap(brr,6);

    printArray(arr,5);
    printArray(brr,6);
}