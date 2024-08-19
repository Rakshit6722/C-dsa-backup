#include<stdio.h>


int fib(int n){

    //base case
    if(n==0 || n==1) return n;

    //recursive function
    // int fb = fib(n-1) + fib(n-2);

    //follow up
    // return fb;

    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    scanf("%d",&n);
    
    int fibonacci = fib(n);
    printf("%d",fibonacci);



    return 0;
}