#include <stdio.h>
#include <string.h>

// calculating size of array
int cal(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i = i + 1;
    printf("size of str : %d\n", i);
}

// using pointer
void show(char *str)
{
    printf("%s\n", str);
}

// traversing the array
int traverse(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

// reverse string
char reverse(char str[], int n)
{
    // int s = 0;
    // int e = n - 1;

    // int i = 0;
    // while (str[i] != 0)
    // {
    //     int temp;
    //     temp = s;
    //     s = e;
    //     e = temp;
    // }
    int i = strlen(str);

    while(i>=0){
        printf("%c",str[i]);
        i--;
    }
}

int main()
{

    char  str[] = "Rakshit";
    cal(str);
    show(str);
    traverse(str);
    reverse(str, 8);
    // show(str);

    // char str1[] = "raar";
    // int j = strlen(str1)-1;
    
    // for (int i = 0; str1[i]!='\0'; i++)
    // {
    //     if (str1[i] != str1[j])
    //     {
    //         printf("not a palindrome\n");
    //         return 0;
    //     }
    //     j--;
    // }
    // printf("palindrome\n");

    // char str1[] = "rakshit";
    // char str2[] = "Rakshit";

    // if(strelen(str1)==strlen(str2)){
    //     int i = 0;
    //     while(i<strlen(str1)){
    //         if(str1[i]!=str2[i]){
    //             printf("not equal\n");
    //             return 0;
    //         }
    //         printf("equal\n");
    //         return 0;
    //     }
    //     else{
    //         printf("not equal\n");
    //     }
    // }

    // char str1[30], str2[30];
    // scanf("%s",str1);
    // scanf("%s",str2);

    // for(int i = 0;i<len1-1;i++){
    //     for(int j = i+1;j<len1;j++){
    //         char temp;
    //         if(str1[i]>str1[j]){
    //             temp = str1[i];
    //             str1[i] = str2[j];
    //             str1[j] = temp;
    //         }

    //         if(str2[i]>str2[j]){
    //             temp = str2[i];
    //             str2[i] = str2[j];
    //             str2[j] = temp;
    //         }
    //     }
    // }

    

    return 0;
}