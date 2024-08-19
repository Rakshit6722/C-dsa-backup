#include <stdio.h>

// int func(int a){
//     if(a==1) return 1;
//     else return 8 + func(a-1);
// }

// int main(){

//     int a, val;
//     a = 3;
//     val = func(a);
//     printf("%d",val);

//     return 0;
// }

int fact(int n)
{
    //base case
    if(n==1 || n==0){
        return 1;
    }

    //recursive case
    // int smallproblem = fact(n-1);
    // int biggerproblem = n*smallproblem;   
     

    //follow above two cases
    // return biggerproblem;
    return n*fact(n-1);   
}

int main()
{

    int n;
    scanf("%d",&n);
    int ft;

    ft = fact(n);
    printf("%d", ft);

    return 0;
}