#include<iostream>
using namespace std;

int main(){

    // int a = 9;

    // if(a>0){
    //     cout<<"A is positive"<<endl;
    // }
    // else if(a==9){
    //     cout<<"NINE";
    // }
    // else{
    //     cout<<"A is negative";
    // }

    // int a = 2;
    // int b = a+1;

    // if((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    char a;
    cout<<"Enter a character";
    cin>>a;

    if(a>='a' && a<='z'){
        cout<<"lowercase";
    }
    else if (a>='A' && a<='Z')
    {
        cout<<"Uppercase";
    }
    else if(a>='0' && a<='9'){
        cout<<"Number";
    }
    
}