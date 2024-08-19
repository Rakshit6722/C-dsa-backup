// #include<iostream>
// using namespace std;

// int main(){

//     int a;
//     cin>>a;

//     if( a%7==0 || a%3==0){
//         cout<<"The number is valid";
//     }
//     else{
//         cout<<"Invalid number";
//     }

//     return 0;
// }
#include <iostream>
using namespace std;


void Xhandler()
{
   try {
     throw "hello"; // throw a char *
   }
   catch(char *) { // catch a char *
      cout << "Caught char * inside Xhandler\n";
      throw ; // rethrow char * out of function
   }
}
int main()
{
   cout << "start\n";

   try{
     Xhandler();
   }
   catch(char *) {
     cout << "Caught char * inside main\n";
   }

   cout << "end";

   return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      