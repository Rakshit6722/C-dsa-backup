#include<iostream>
using namespace std;

// class test{
//     public:
//     test()
//     {
//         cout<<"constructor call";
//     }
//     ~test()
//     {
//         cout<<"destructor call";
//     }
// }

// int main(){
//     test();
//     return 0;
// }

class My_Class
{
    int num;
    public: void set_num(int val)
    {num = val;}
    void show_num(); };

    void My_Class::show_num()
    {cout<<num<<"/n"};


int main()
{
    
    My_Class ob, *p;
    ob.set_num(1);
    ob.show_num();
    p=&ob;
    p->show_num();
}

