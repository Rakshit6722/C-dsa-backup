#include <stdio.h>
#include <string.h>

void bubbleSort(char str[], int n) {
    int i, j;
    char temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j+1]) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
int compare(char str1[100],char str2[100]){
    int n1,n2,i;
    n1 = strlen(str1);
    n2 = strlen(str2);

    if (n1 != n2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    bubbleSort(str1, n1);
    bubbleSort(str2, n2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
}



int main() {
    char str1[100], str2[100];
    int n1, n2, i;
    scanf("%s", str1);
    scanf("%s", str2);
    compare(str1,str2);

   

    return 0;
}