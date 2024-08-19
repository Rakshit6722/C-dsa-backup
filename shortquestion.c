#include <stdio.h>

// sum of series

// int main(){

//     int n;
//     scanf("%d",&n);
//     float sum=0;

//     for(int i=1;i<=n;i++){

//         if(i%2){
//             sum += (float)1/i;
//         }
//         else{
//             sum -= (float)1/i;
//         }

//     }

//     printf("%0.4lf",sum);

//     return 0;
// }

// alternate digit sum

// int main(){

//     int n;
//     scanf("%d",&n);
//     int rev=0;
//     int sum=0;
//     int sign = 1;

//     while(n!=0){
//         int rem = n%10;
//         rev = rev*10 + rem;
//         n = n/10;
//     }

//     n = rev;

//     while(n!=0){
//         int digit = n%10;
//         sum = sum +  sign * digit;
//         sign = -sign;
//         n = n/10;
//     }

//     printf("%d",sum);
// }

// pyramid of stars

// int main(){

//     int n;
//     scanf("%d",&n);

//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=2*n-1;j++){
//             if(j>=n-(i-1) && j<=n+(i-1)) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }

// fibonacci series
// #include <stdbool.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         int a = 0;
//         int b = 1;
//         int next = 0;

//         if (n == a || n == b)
//         {
//             printf("true");
//         }

//         else
//         {
//             next = a + b;
//             while (next < n)
//             {
//                 a = b;
//                 b = next;
//                 next = a + b;
//             }
//         }
//         if (next == n)
//             printf("true");
//         else
//             printf("false");
//     }
// }

// break the number
//  int main(){
//      int n;
//      scanf("%d",&n);
//      int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         int temp = arr[i];
//         int sum=0;
//         while(temp>0){
//             sum = (sum*10)+temp%10;
//             temp = temp/10;
//         }
//         while(sum>0){
//             int digit = sum%10;
//             printf("%d ",digit);
//             sum = sum/10;
//         }
//     }

//     return 0;
// }

// morning prayer queue
// #include <limits.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int max1 = INT_MIN;
//     int max2 = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max2)
//         {
//             max2 = max1;
//             max1 = arr[i];
//         }
//         else if(arr[i]<max1 && arr[i]>max2){
//             max2 = arr[i];
//         }
//     }
//     printf("%d\n",max1);
//     printf("%d\n",max2);
// }

// conversion of binary to decimal

// int main()
// {

//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         char arr[n];
//         scanf("%s", arr);

//         int sum = 0;
//         int power = 1;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] == '1')
//             {
//                 sum = sum + power;
//             }
//             power *= 2;
//         }

//         printf("%d", sum);
//     }
// }

// sorting an array
// #include <string.h>

// void swap(char str1, char str2)
// {
//     char temp = str1;
//     str1 = str2;
//     str2 = temp;
// }

// void bubblesort(char arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     char arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", &arr[i]);
//     }
//     bubblesort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%s\n", arr[i]);
//     }

//     return 0;
// }
// #include<stdlib.h>
// #include <string.h>
// void swap(char **str1, char **str2)
// {
//     char *temp = *str1;
//     *str1 = *str2;
//     *str2 = temp;
// }
// void sortStrings(char **arr, int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (strcmp(arr[j], arr[j + 1]) > 0)
//             {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char *arr[n];
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         arr[i] = malloc(sizeof(char) * 100);
//         scanf("%s", arr[i]);
//     }
//     sortStrings(arr, n);
//     printf("The sorted array of strings is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%s\n", arr[i]);
//     }
//     return 0;
// }

// array pair of sum

// int main(){

//     int n,m;
//     scanf("%d",&n);
//     scanf("%d",&m);

//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==m){
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

// books ascending
// int main(){
//      int n;
//      scanf("%d",&n);
//      int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// factorail using rescursion

// int fact(int n)
// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int factorial = fact(n);
//     printf("%d", factorial);

//     return 0;
// }

// missing number
//   int main(){

//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     int sum=0;
//     int expected_sum;

//     for(int i=0;i<n-1;i++){
//         scanf("%d",&arr[i]);
//         sum += arr[i];

//     }
//     expected_sum = (n*(n+1))/2;

//     printf("%d",expected_sum - sum);

//     return 0;
// }

// int main() {
// int n, i, sum = 0, expected_sum;
// scanf("%d", &n);
// int arr[n];
// for (i = 0; i < n-1; i++) {
// scanf("%d", &arr[i]);
// sum += arr[i];
// }
// expected_sum = (n * (n+1)) / 2;
// printf("%d\n", expected_sum - sum);
// return 0;
// }

//IP address
// int main()
// {

//     char arr[50];
//     scanf("%s", arr);
//     int i = 0;
//     int sum = 0;
//     while (arr[i] != '.')
//     {
//         int r = arr[i] - '0';
//         sum = sum * 10 + r;
//         i++;
//     }

//     if (sum >= 0 && sum <= 127)
//     {
//         printf("Class A");
//     }
//     else if (sum >= 128 && sum <= 191)
//     {
//         printf("Class B");
//     }
//     else if (sum >= 192 && sum <= 224)
//     {
//         printf("Class C");
//     }
//     else if (sum >= 225 && sum <= 240)
//     {
//         printf("Class D");
//     }
//     else
//     {
//         printf("Class E");
//     }

//     return 0;
// }

//reverse the array
// int main(){

//     int n;
//     scanf("%d",&n);
//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=n-1;i>=0;i--){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

//fibonacci number using recursion

// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }

//     return fibonacci(n-1)+fibonacci(n-2);
// }

// int main(){
//     int n;
//     scanf("%d",&n);

//     int fib = fibonacci(n);
//     printf("%d",fib);
// }

//first and last digit

// int main(){
//     int n;
//     scanf("%d",&n);

//     int rem = n%10;
//     int a;

//     while(n!=0){
//         a = n%10;
//         n/=10;

//     }

//     printf("%d %d",a,rem);
// }

//even multiplicatoin

// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum = 1;
//     for(int i=2;i<=n;i++){
//         if(i%2==0){
//             sum *= i;
//         }
//     }
//     printf("%d",sum);
// }

//reverse the number

// int rev(int n){
//     int rev=0;
//     while(n!=0){
//         int rem = n%10;
//         rev = rev*10 + rem;
//         n /= 10;

//     }
//     return rev;
// }

// int arm(int n){
//     int temp = n;
//     int sum=0;
//     while(n!=0){
//         int rem = n%10;
//         sum = sum + (rem*rem*rem);
//         n = n/10;
//     }
//     if(temp == sum){
//         printf("Armstrong number\n");
//     }
//     else printf("Not a armstrong number\n");
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int temp = n;

//     arm(n);

//     int reverse = rev(n);
//     printf("%d\n",reverse);


// //check if palindrome

// if(temp==rev(n)){
//     printf("palindrome number\n");
// }
// else printf("not a palindrome\n");


// }

//digit count
// int main(){

//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     while(n!=0){
//         int rem = n%10;
//         count++;
//         n /= 10;
//     }

//     printf("%d",count);

//     return 0;
// }

//binary   to decimal
// int main(){

//     int n;
//     scanf("%d",&n);
//     int sum = 0;
//     int power = 1;

//     while(n!=0){
//         int rem = n % 10;
//         if(rem==1){
//             sum = sum + power;
//         }
        
//         n /= 10;
//         power = power*2;
        

//     }
//     printf("%d",sum);

//     return 0;
// }

//alternate digit sum
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     int sign = 1;
//     while(n!=0){
//         int rem = n%10;
//         sum = sum*10 + rem;
//         n /= 10;
//     }
//     n = sum;
//     int rev=0;
//     while(n!=0){
//         int digit = n%10;
//         rev = rev + sign*digit;
//         sign = -sign;
//         n /= 10;
        
//     }
//     printf("%d",rev);
// }

//sum of series

// int main(){
//     int n;
//     scanf("%d",&n);
//     float sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2){
//             sum += (float)1/i;
//         }
//         else {
//             sum -= (float)1/i;
//         }
//     }
//     printf("%.04lf",sum);
// }

//array rotation right k times
// int main(){

//     int k;
//     scanf("%d",&k);
//     int n;
//     scanf("%d",&n);
//     int arr[n],temp[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//             temp[(i+k)%n] = arr[i];
//         }
//     for(int i=0;i<n;i++){
//         printf("%d ",temp[i]);
//     }
    
// }

//array rotaion left k times
// int main(){

//     int n,k;
//     scanf("%d",&n);
//     scanf("%d",&k);

//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<k;i++){
//         int j,first;
//         first = arr[0];
//         for(j=0;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//         arr[j] = first;
//     }

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

//check array roation and return index
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int count = 1;

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[i+1]){
//             count++;
//             continue;
//         }
//         else{
//             break;
//         }
//     }
//     if(count == n+1){
//         printf("0");
//     }
    
//     else printf("%d",count);
    
// }

//matrix operation

int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                for(int j=0;j<m;j++){
                    arr[i][j]=0;
                }
                break;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}