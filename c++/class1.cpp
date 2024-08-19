#include<iostream>
using namespace std;

class Rectangle
{
    private: int length;
    int breadth;
    public: Rectangle(int l, int b)
    {
        length = l; breadth = b;
    }
    int getArea(){return 2*length*breadth;}

};

int main()
{

    Rectangle varl(5,2);
    Rectangle*ptr = &varl;

    int area = ptr->getArea();
    cout<<"Area of rectangle is"<<area;

    return 0;
}