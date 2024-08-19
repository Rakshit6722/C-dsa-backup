#include<stdio.h>

int func(int a){
    if(a==1) return 1;
    else return 8 + func(a-1);
}

int main(){

    int a, val;
    a = 3;
    val = func(a);
    printf("%d",val);



    return 0;
}