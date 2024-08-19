// #include<iostream>
// using namespace std;

// void fact(int n){
//     int factorial = 1;
//     for(int i=2; i<=n; i++){
//         factorial*=i;
        
//     }
//     return factorial;
// }

// int  isPrime(int num){
//     bool flag=0;

//     for(int i=2; i<num; i++){
//         if(num%i==0){
//             cout<<"non-prime"<<endl;
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Prime";
//     }
// }

// int rev(int n){
//     int reverse = 0;
//     while(n>0){
//     int lastdigit = n%10;
//      reverse = reverse*10 + lastdigit;
//     n = n/10;
//      }
//      cout<<reverse<<endl;

// }

// int pascal(int n){

    

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     isPrime(n);

//     fact(n);
    
//     rev(n);

//     pascal(n);
    
  
//     return 0;
// }

//INHERITANCE
// #include<iostream>
// using namespace std;

// class vehicle{
//     public:
//     vehicle(){
//         cout<<"This is a vehicle\n";
//     };
// };  

// class car: public vehicle{

// };

// int main(){

//     car obj;
//     return 0;
// }

//Multilevel inheritance is process of deriving a class from another derived class 

//Heirerichal 
//In this more than one subclass is inherited from a single base class that is more than one right class
//is created from a single base class

// #include<iostream>
// using namespace std;

// class  base{
//     public:
//     virtual void print(){
//         cout<<"IN BASE"<<endl;
//     }
// };

// class pub:public base{
//     public:
//     void print(){

//         cout<<"IN PUB"<<endl;
//     }
// };

// int main(){
//     pub p;
//     base *x=&p;
//     x->print();

//     return 0;
// }
// #include<iostream>
// using namespace std;

// class Base{
// 	public:
// 		Base()
// 		{
// 			cout<<"base class constructor"<<endl;
// 		}
// 		virtual ~Base()
// 		{
// 			cout<<"Base class destructor"<<endl;
// 		}
// };

// class Derived:public Base{
// 	public:
// 		Derived()
// 		{
// 			cout<<"Derived class constructor"<<endl;
// 		}
// 		~Derived()
// 		{
// 			cout<<"Derived class destructor"<<endl;
// 		}
// };

// int main()
// {
// 	Base *b=new Derived;
// 	delete b;
// }
 #include <iostream>
using namespace std;

int main()
{
    int numerator,denominator,result;
    cout<<"enter 2 number"<<endl;
    cin>>numerator>>denominator;
    
     result=numerator/denominator;
    cout<<"division"<<result;
    return 0;


try
{
    if(denominator==0)
    throw denominator;
}

catch(int x)
{
    cout<<"divide by zero not allowed";
}

cout<<"division is"<<result;
return 0 ;
}
