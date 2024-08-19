#include <iostream>
using namespace std;

int main()
{

    float pointer;
    cout << "enter points :";
    cin >> pointer;

    if (pointer >= 9 && pointer <= 10)
    {
        cout << "A+";
    }
    else if (pointer >= 8 && pointer <= 9)
    {
        cout << "A";
    }
    else if (pointer >= 7 && pointer <= 8)
    {
        cout << "B+";
    }
    else if (pointer >= 6 && pointer <= 7)
    {
        cout << "B";
    }
    else if (pointer >= 5
     && pointer <= 6)
    {
        cout << "C";
    }
    else{
        cout<<"Student failed";
    }

    return 0;
}