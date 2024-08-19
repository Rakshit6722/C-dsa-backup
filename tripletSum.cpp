#include<iostream>
using namespace std;

int pairSum(int arr[], int n, int s){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==s)
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            }
        }
        cout<<endl;
    }
}

int main(){

    int arr[5] = {1,2,3,4,8};

    pairSum(arr, 5 , 12);
}