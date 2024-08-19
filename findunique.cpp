#include <iostream>
using namespace std;

int findunique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int t;
cin >> t;

for (int i = 0; i < t; i++)
{
    int arr[100], n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    // printArray(arr, n);
    findunique(arr, n);
}
}

// #include<iostream>
// using namespace std;

// bool uniqueOccurence(int arr[], int n){
//     int count=0, ans=0;
//     for(int i=0; i<n; i++){
//         ans = ans^arr[i];
//         if(ans){
//             count++;
//             return 1;
//         }
        
//     }
// }

// int main(){

//     int arr[6] = {1,2,2,1,1,2};

//     bool unique = uniqueOccurence(arr, 6);

//     if(unique){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
// }