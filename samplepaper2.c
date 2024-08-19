#include <stdio.h>
#include <string.h>
// to find words in a string
//  int main(){

//     char str[100];
//     int countw = 0;
//     int i;
//     fgets(str, 100, stdin);

//     int len = strlen(str);

//     for(int i=0;i<len;i++){
//         if(str[i] == ' '){
//             countw++;
//         }
//     }
//     printf("%d",countw+1);

//     return 0;
// }

// return max element in an array
//  int main(){
//      int n;
//      scanf("%d",&n);
//      int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     int max = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     printf("%d",max);

//     return 0;
// }

// count no of vowels, consonants, digits, and spaces in an string

// void count(char str[]){
//     int cv=0, cc=0, cd=0, cs=0;
//     for(int i=0;str[i]!=0;i++){
//         if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
//             cv++;
//         }
//         else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
//             cc++;
//         }
//         else if(str[i]>='0' && str[i]<='9'){
//             cd++;
//         }
//         else if(str[i]==' '){
//             cs++;
//         }
//     }
//     printf("%d\n%d\n%d\n%d\n",cv,cc,cd,cs);
// }
// int main(){

//     char str[100];
//     fgets(str,100,stdin);

//     count(str);

//     return 0;

// }

// recursive function to find nth fibonacci number
//  int fib(int n){
//      if(n==0 || n==1){
//          return n;
//      }
//      return fib(n-1)+fib(n-2);
//  }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int fibonacci = fib(n);
//     printf("%d",fibonacci);
// }

// merge strings in alternate order
//  void merge(char str1[], char str2[]){
//      char res[100];
//      int len1 = strlen(str1);
//      int len2 = strlen(str2);
//      int i=0,j=0,k=0;

//     while(i<len1 && j < len2){
//         res[k] = str1[i];
//         k++;
//         i++;
//         res[k] = str2[j];
//         k++;
//         j++;
//     }
//     while(i<len1){
//         res[k] = str1[i];
//         k++;
//         i++;
//     }
//     while(j<len2){
//         res[k]= str2[j];
//         k++;
//         j++;
//     }
//     printf("%s ",res);
// }

// int main(){
//     char str1[100],str2[100];
//     fgets(str1,100,stdin);
//     fgets(str2,100,stdin);

//     merge(str1,str2);

// }

// unique elements sum
//  int main(){
//      int n;
//      scanf("%d",&n);
//      int arr[n];
//      for(int i=0;i<n;i++){
//          scanf("%d",&arr[i]);
//      }
//      int i,j,k;
//      int ctrl = 0;
//      int sum=0;
//      for(int i=0;i<n;i++){
//          ctrl=0;
//          for(int j=0;j<n+1;j++){
//              if(i!=j){
//                  if(arr[i]==arr[j]){
//                      ctrl++;
//                  }
//              }
//          }
//          if(ctrl==0){
//              sum += arr[i];
//          }

//     }
//     printf("%d",sum);
// }

// duplicate number
//  int main(){
//      int n;
//      scanf("%d",&n);
//      int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d",arr[i]);
//                 break;

//             }
//         }
//     }
//     return 0;
// }

// column wise and row wise sum
// int main()
// {

//     int n, m;
//     scanf("%d", &n);
//     scanf("%d", &m);

//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){

//             sum += arr[i][j];
//         }
//     }
//     int sum1=0;
//     for(int j=0;j<m;j++){
//         for(int i=0;i<n;i++){
//             sum1+=arr[i][j];
//         }
//     }

//     printf("\n");
//     printf("%d\n",sum);
//     printf("%d",sum1);
// }

// binary to decimal
// int main(){
//     int n;
//     scanf("%d",&n);

//     int i,a[10];
//     for(i=0;n>0;i++){
//         a[i]=n%2;
//         n = n/2;

//     }
//     for(i=i-1;i>=0;i--){
//         printf("%d",a[i]);
//     }
//     return 0;
// }

// countsetbit

// int main(){

//     int t;
//     scanf("%d",&t);

//     for(int i=0;i<t;i++){
//         int n;
//         scanf("%d",&n);

//         int count=0;

//         while(n!=0){
//             if(n%2==1){
//                 count++;
//             }
//             n /= 2;
//         }
//         printf("%d",count);
//     }

//     return 0;
// }

// lowercase to uppercase

// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     int i=0;

//     while(str[i]!=0){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i] -= 32;
//         }
//         i++;
//     }
//     printf("%s",str);
// }

// uppercase to lowercase

// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     int i=0;

//     while(str[i]!=0){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i] += 32;
//         }
//         i++;
//     }
//     printf("%s",str);
// }

// odd and even place sum
//  int main(){
//      int n;
//      scanf("%d",&n);
//      int esum=0,osum=0;

//     int i=1;
//     while(n!=0){
//         if(i%2==0){
//             esum += n%10;
//         }
//         else{
//             osum += n%10;
//         }
//         n/=10;
//         i++;
//     }
//     printf("%d\n%d",esum,osum);
// }

// if a string is palindrome

int main()
{

    char str[50];
    fgets(str, 50, stdin);
    int len = strlen(str);
    int h = 0;
    int l = len - 1;

    // while (e > s)
    // {
        // if (str[s++] != str[e--])
        // {
        //    printf("not a palindrome");
        //     return 0;
        // }

        while (h > l)
        {
            if (str[l++] != str[h--])
            {
                printf("%s is not a palindrome\n", str);
                return 0;
                // will return from here
            }
        }
    //}
    printf("palindrome");
}
