#include <iostream>
using namespace std;

int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return arr[s];
}

int main()
{

    int arr[5] = {7, 9, 1, 2, 3};

    int pivot = findPivot(arr, 5);
    cout<<"Pivot element is "<<pivot;
}