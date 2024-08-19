// #include <stdio.h>

// int main()
// {

//     // char str[6] = "hello";
//     // for(int i = 0; i<6; i++){
//     //     printf("%c",str[i]);
//     // }

//     // char str[50];
//     // gets(str);
//     // puts(str);

//     // length of string
//     //  char str[] = "rakshit";
//     //  int count = 0;
//     //   for(int i = 0; str[i] != 0; i++){
//     //      count++;
//     //   }
//     //   printf("%d",count);

//     // reverse of string
//     int n;
//     scanf("%d", &n);
//     char str[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%c", &str[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", str[i]);
//     }

//     int s = 0;
//     int e = n - 1;
//     // while (s <= e)
//     // {
//     //     int temp = str[s];
//     //     str[s] = str[e];
//     //     str[e] = temp;

//     //     s++;
//     //     e--;
//     // }
//     while(s<=e){
//         if(str[s++]!=str[e--]){
//                 printf("\n");
//             printf("not a palindrome");
//             return 0; 
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%c", str[i]);
//     // }

//     return 0;

// }

#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    fgets(str,100,stdin);
    // printf("%s",str);
    //puts(str);
}
