#include<iostream>
using namespace std;

int main(){

    int nst=1;
    int n;
    
    cin>>n;
    int nsp=n-1;
    

   for(int row=1;row<=n;row++){
    for(int csp=1;csp<=nsp;csp++){
        cout<<" ";
    }
    for(int cst=1;cst<=nst;cst++){
        
        if(row!=1){
            cout<<"*";
            cout<<"*";
        }else{
            cout<<"*";
        }
        
    }
    cout<<endl;
    nsp--;
    nst++;
    
   }

    return 0;
}
