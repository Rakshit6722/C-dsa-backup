#include <iostream>
using namespace std;

int main()
{
    int *pointInt;
    float *pointFloat;

    pointInt = new int;
    pointFloat = new float;

    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    delete pointInt;
    delete pointFloat;he 

    cout << *pointInt << endl;
    cout << *pointFloat << endl;


    return 0;
}

/* It is a good parctice null pointer to pointer variable in case you do not have exact address to be assigned. It is done at the time of 
variable declaration 