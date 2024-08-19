#include<iostream>
#include<array>
using namespace std;


int main(){
    //int a[4] = {1,2,3,4};
    array<int,4> a = {1,2,3,4};

    int size = a.size();
    cout<<size;
}