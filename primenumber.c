#include<stdio.h>
#include <stdbool.h>

int main(){

    int n;
    scanf("%d",&n);
    
    // int i = 2;

    // if(n==2){
    //     printf("prime number");
    //     return 0;
    // }
    

    // while(n-1>=i){
    //     if(n%i==0){
    //         printf("non-prime");
    //         return 0;
    //     }
    //     i++;

    // }
    // printf("prime");

    for(int num=2; num<=n; num++){
    bool isprime = true;
    if(num!=2){
    for(int i = 2; i<num; i++){
        if(num%i==0){
            isprime = false;
            break;
        }
  

    }
    }
    if(isprime){
        printf("%d\n",num);
    }
    }


    return 0;
}