// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int rowno = 1; rowno <= n + 1; rowno++)
//     {
//         for (int cts = 1; cts <= rowno; cts++)
//         {
//             printf("*\t");
//         }
//         for (int ctsp = 1; ctsp <= 2 + (n - rowno) + 1; ctsp++)
//         {
//             printf("\t");
//         }
//         for(int cth = 1; cts<=rowno; cth++){
//             if(rowno == n+1 && cth == n+1){
//                 break;
//             }
//             else{
//                 printf("#\t");
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int lctsp = 0;

    for (int rowno = 1; rowno <= (n + 1) / 2; rowno++)
    {
        for (int ctsp = 1; ctsp <= (n + 1) - 2 * rowno; ctsp++)
        {
            printf(" ");
        }
        for (int cts = 1; cts <= rowno; cts++)
        {
            printf("*");
        }
        for (int ctsp = 1; ctsp <= lctsp; ctsp++)
        {
            printf(" ");
        }
        if (rowno == 1)
        {
            lctsp = 1;
        }
        else
        {
            lctsp = lctsp + 2;
        }
        for (int cth = 1; cth <= rowno; cth++)
        {
            if(rowno != 1){
                printf("#");
            }
           
        }
        printf("\n");
    }

    return 0;
}