// int n;
// #include <stdio.h>

// int main()
// {
//     int num = 1;
//     scanf("%d", &n);
//     for (int row = 1; row <= n; row++)
//     {
//         for (int ctsp = 1; ctsp <= n - row; ctsp++)
//         {
//             printf(" ");
//         }
//         for (int cts = 1; cts <= row; cts++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         num--;
//         for (int cth = 1; cth <= row - 1; cth++)
//         {
//             --num;
//             printf("%d", num);
//         }
//         num++;
//         printf("\n");
//     }
//     for (int row = n; row > 0; row--)
//     {
//         for (int ctsp = 1; ctsp <= n - row; ctsp++)
//         {
//             printf(" ");
//         }
//         for (int cts = 1; cts <= row; cts++)
//         {
//             printf("%d", num);
//             num++;
//         }
//         num--;
//         for (int cth = 1; cth <= row - 1; cth++)
//         {
//             --num;
//             printf("%d", num);
//         }
//         num--;
//         printf("\n");
//     }

//     return 0;
// }

//Hollow Rhombus
 #include<stdio.h>

 int main(){

    int n;
    scanf("%d",&n);

    for(int rowno = 1; rowno <= n; rowno++){

        for(int ctsp = 1; ctsp <=n - rowno; ctsp++){
            printf(" ");
        }
        if(rowno == 1 || rowno == n){
            for(int cts = 1; cts<=n; cts++){
                printf("*");
            }
        }
        else{
            for(int cts = 1; cts<=n; cts++){
                if(cts == 1 || cts == n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
 }