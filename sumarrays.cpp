#include <iostream>
using namespace std;

int main(){
    int arr[100],n,sum;
    cin>>n;

    sum = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        //cout<<arr[i];
        sum = sum + arr[i];
    }

    cout<<sum;

    
}