#include<stdio.h>

int main(){

    int rowno = 1;
    while(rowno <=3){
        int j = 1;
        while(j<=3){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        rowno++;
    }

    return 0;
}