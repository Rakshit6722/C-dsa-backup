#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }

        else if(k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }

        else if(k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{

    int arr[6] = {1, 2, 3, 3, 4, 5};

    cout << "The first occurence of 3 is " << FirstOccurence(arr, 6, 3)<<endl;
    cout << "The last occurence of 3 is " << LastOccurence(arr, 6, 3)<<endl;
}