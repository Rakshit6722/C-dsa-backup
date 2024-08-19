#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    // int count = 1;
    
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i<<" ";
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count+=1;
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }



    // while(i<=n){
    //     int j=1;
    //         int x = i;
    //     while(j<=i){
    //         cout<<x<<" ";
    //         // cout<<(i-j+1)<<" ";
    //         x-=1;
    //         j+=1;
    //     }
    //     i+=1;
    //     cout<<endl;

    // }

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = 'A'+j-1;
    //         cout<<ch<<" ";
    //         j+=1;
    //     }
    //     cout<<endl;
    //     i+=1;
    // }

//   int count = 1;
    // while(i<=n){

    //     int k=1;
    //     while(k<=i){
    //         cout<<" ";
    //         k+=1;
    //     }


    //     int j =i;
    //     while(j<=n){
    //         cout<<j;
    //         j+=1;

    //     }
    //     cout<<endl;
    //     i+=1;
    // }
    char count = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
     
    return 0;
}