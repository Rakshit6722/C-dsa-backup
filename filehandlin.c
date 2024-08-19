#include<stdio.h>

int main(){

    FILE *fp; //file pointer(mandatory to use)
    fp = fopen("hello.txt","w");

    fprintf(fp,"Hello World");

    return 0;
}
