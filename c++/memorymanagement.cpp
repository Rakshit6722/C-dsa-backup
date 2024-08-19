#include <iostream>
using namespace std;

int main(){

    // int * pointInt;
    // float * pointFloat;

    // pointInt = new int;
    // pointFloat = new float;

    // *pointInt = 45;
    // *pointFloat = 45.45f;

    // cout << *pointInt << endl;
    // cout << *pointFloat << endl;

    // delete pointInt;
    // delete pointFloat;

    // cout << *pointInt << endl;
    // cout << *pointFloat << endl;


    int a = 4;
    int *ptr = &a;

    cout<<"The value of  a is "<<*ptr;

    int *p = new int (40);

    cout<<"the value at address p is"<<*(p)<<endl;

    float *p = new float (40.88);
    p = &a;
    return 0;
}