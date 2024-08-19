#include <iostream>
using namespace std;

int main()
{

    int sidea, sideb, sidec;
    cout << "side a : ";
    cin >> sidea;
    cout << "side b : ";
    cin >> sideb;
    cout << "side c : ";
    cin >> sidec;

    if(sidea==sideb && sideb==sidec){
        cout<<"Equilateral triangle";
    }
    else if(sidea==sideb || sideb==sidec || sidec==sidea){
        cout<<"Isosceles triangle";
    }
    else{
        cout<<"Scalene triangle";
    }

    return 0;
}