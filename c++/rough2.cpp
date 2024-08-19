// #include <iostream>
// using namespace std;

// int main(){

// int var1=10;
// int var2[20];

// cout<<var1<<endl;
// cout<<&var2<<endl;

// int a=10;
// int *aptr;
// aptr = &a;

// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<aptr<<endl;
// cout<<*aptr<<endl;

// Pointers are the variable that stores the address of another variable.
// NOTE : we cannot assign value to the poninter variable. They are only used to store the address of another variable.

// int a = 3;
// int *b = &a;
// int **c = &b;
// int ***d = &c;

// cout<<b<<endl;
// cout<<&a<<endl;
// cout<<&b<<endl;
// cout<<*c<<endl;
// cout<<**c<<endl;
// cout<<&c<<endl;
// cout<<*d<<endl;
// cout<<**d<<endl;
// cout<<***d<<endl;

// char ch='a';
// char *cptr=&ch;
// cout<<*cptr<<endl;
// cptr++;
// cout<<*cptr<<endl;

// int arr={10,20,30};
// cout<<*arr<<endl;
// int *ptr = arr;

// for(int i=0; i<3; i++){
//     cout<<*ptr<<endl;
//     ptr++;
// }

//     return 0;

// }
// int c;

// int sum(int a, int b){
//     c = a + b;
//     return c;
// }

// int main(){
//     int x=10,y=20,z;
//     z = sum(x,y);

// }
// cout<<z;

// int c;
// void sum(int a, int b)
// {
//     c = a + b;
//     cout << c;
// }

// int main()
// {
//     int x = 10, y = 20;
//     sum(x, y);
//     return 0;
    
// }

// void swap(int x, int y){
//     int 
// }

// int main(){
//     int a = 10;
//     int b = 20;

//     cout<<"Before swaping"<<a<<b;
//     swap(a,b);
//     cout<<"After swaping"<<a<<b;

//     return 0;

    //the call by value method of passing arguments to a function copies the actual value of an argument into the formal parameters of the function.
    //while calling a function we pass values of the variable to it such function are known an call by value.
    //In callby value actual values remain unchanged even after exchanging the function of formal parameter.


    //call by pointer
    //this method pass arguments to a fucntion and copies the address of an argument into formal parameters.
    //the address is used to access the actual arguments used in the call this means that changes to the parameters affect the passed argument.

    //call by reference 
    // call by reference method of passing argument to a function copies the reference of an argument into the formal parameter. Inside the function the reference
    //is used to access the actual argument used in the call, this means that changes made to parameter affect the passed argument.
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a;
//     a = 12;
//     cout<<"size of int "<<a<<endl;


//     float b;
//     b = 2.3;
//     cout<<"size of float "<<sizeof(b)<<b;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter the value :"<<endl;
    cin>>n;
    if (n='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'){
        cout<<"n is lower case";
    }
    else if(n="An"||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z'){
        cout<<"n is upper case";
    }
    else{
        cout<<"n is numeric";
    }

return 0;
}