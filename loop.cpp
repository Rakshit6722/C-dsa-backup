#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // int i=1;

    // while (i<=n)
    // {
    //  cout<<i<<endl;
    //  i+=1;
    // }
     int n;
     cin>>n;

      int i = 1;
      int sum = 0;

      while (i<=n)
      {
          /* code */
          sum = sum + i;
          
          i+=1;
      }
      cout<<sum;
      

    return 0;
}