#include<iostream>
using namespace std;

int uniqueOccurence(int arr[], int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
        cout<<ans;
    }
}

int main(){

    int arr[5] = {1,2,2,1,3};
    
uniqueOccurence( arr, 5);
    
}