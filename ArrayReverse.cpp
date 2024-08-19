// #include <iostream>
// using namespace std;

// int reverseArray(int arr[], int n){
//     int s = 0;
//     int e = n - 1;

//     while(s<=e){
//         swap(arr[s], arr[e]);

//         s++;
//         e--;
//     }
// }

// int printArray(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[5] = {12, 4, 5, 23, 7};

//     printArray(arr, 5);
//     reverseArray(arr, 5);
//     printArray(arr, 5);
// }
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0; int e = v.size() - 1;
     while(s<=e){
        swap(v[s], v[e]);

        s++;
        e--;
     }
     return v;
}

vector<int> print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}





int main()
{
    vector<int> a;

    a.push_back(11);
    a.push_back(2);
    a.push_back(6);
    a.push_back(7);
    a.push_back(18);
    a.push_back(10);

    print(a);
    vector<int> ans = reverse(a);
    print(ans);
}