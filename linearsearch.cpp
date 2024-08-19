#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {12, 23, 9, 80, 4, 3, 34, 32, 2, 5};

    int key;
    cin>>key;

    bool found = search(arr, 10, key);
    if(found){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}