#include<iostream>
using namespace std;

class c1{
    public:int Rollno;
    public:int s1,s2;
};

int main(){

    // c1 obj;
    // obj.Rollno = 10;
    // obj.s1=40;
    // obj.s2=80;

    // cout<<"Roll.no is "<<obj.Rollno<<endl;
    // cout<<obj.s1<<endl<<obj.s2<<endl;


    //Write a program to add 2-D array
    //Write a program to print the transpose of 2-D matrix


    // int row, col;
    // cout<<"Enter the numbers of rows:  ";
    // cin>>row;
    // cout<<"Enter the number of cols: ";
    // cin>>col; 

    class XYZ
    {
        private:
        int num = 100;
        char ch = 'Z';

        public:
        friend void disp(XYZ obj);
    };

    void disp(XYZ obj)
    {
        cout<<obj.num<<endl;
        cout<<obj.ch<<endl;
    }

    int main()
    {
        XYZ obj;
        disp(obj);
        return 0;
    }


    
    
                                       

    return 0;
} 