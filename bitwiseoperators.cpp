#include<iostream>
using namespace std;

int main(){

    int a = 6;
    int b = 4;
  

    cout<<" a&b "<<(a&b)<<endl; //and 
    cout<<" a|b "<<(a|b)<<endl; //or
    cout<<" ~a "<<~a<<endl; //not 
    cout<<" a^b "<<(a^b)<<endl; //xor

    //right shift (divide the number by 2 in most cases)
    cout<<(17>>1)<<endl;
    cout<<(19>>2)<<endl;
    
    //left shift(multipy the number by 2 in most cases)
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i = 7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;

    return 0;

 
}