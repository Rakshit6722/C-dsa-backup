#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;

    for(int a=1; a<=30; a++){

        if(a%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }

        cout<<"Go out today!"<<endl;
        pocketmoney=pocketmoney-300;
    }

    return 0;
}