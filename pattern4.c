#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int k=(n+1)/2;
    int l_ctsp=0;
    
    for(int row=k;row>=1;row--)
    {
        for(int u_star=1;u_star<=row;u_star++)
        {
            printf("*\t");
        }
        //if(row!= k){
            
        for(int sp=1;sp<=l_ctsp;sp++)
        {
            printf("\t");
        //}
        }
        
        l_ctsp=l_ctsp+2;
        for(int u_star=1;u_star<=row;u_star++)
        {
            if(row==k && u_star==k)
            {
                break;
            }
            printf("*\t");
        }
       
        printf("\n");
    }

    return 0;
}