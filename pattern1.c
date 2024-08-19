// #include <stdio.h>

// int main()
// {
//     //1 0 pattern
//     int rows, col, i, n;
//     scanf("%d", &n);

//     for (rows = 1; rows <= n; rows++)
//     {
//         for (col = 1; col <= rows; col++)
//         {
//             if ((rows + col) % 2 == 0)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// pyramid pattern
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int rowno = 1; rowno <= n; rowno++)
    {
        for (int ctsp = 1; ctsp <= n - rowno; ctsp++)
        {
            printf(" ");
        }
        for (int cts = 1; cts <= rowno; cts++)
        {
            printf("*");
        }
        for (int cts = 1; cts <= rowno - 1; cts++)
        {
            printf("#");
        }
        printf("\n");
    }

        for (int rowno = n; rowno > 0; rowno--)
    {
        for (int ctsp = 1; ctsp <= n - rowno; ctsp++)
        {
            printf(" ");
        }
        for (int cts = 1; cts <= rowno; cts++)
        {
            printf("*");
        }
        for (int cts = 1; cts <= rowno - 1; cts++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

// inverted pyramid
//  #include<stdio.h>
//  int main()
//  {

//     int n;

//     scanf("%d", &n);

//     for (int rowno = n; rowno > 0; rowno--)
//     {
//         for (int ctsp = 1; ctsp <= n - rowno; ctsp++)
//         {
//             printf(" ");
//         }
//         for (int cts = 1; cts <= 2 * rowno - 1; cts++)
//         {
//             printf( "*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n;
//     scanf("%d",&n);

//     for(int rowno = 1; rowno<=n; rowno++){
//         for(int col = 1; col<=n; col++){
//             if(col==rowno || col == n+1-rowno){ //if(rowno == (n+1)/2 || col == (n+1)/2)

//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }