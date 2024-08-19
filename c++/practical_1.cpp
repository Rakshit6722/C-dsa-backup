#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"Before swaping"<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;

    c = a;
    a = b;
    b = c;

    cout<<"After swaping"<<endl;
    cout<<"a = "<<a<<", b = "<<b<<endl;

    return 0;
}