#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int mountainPeak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
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

    int arr[7] = {1, 3, 9, 7, 6, 5, 4};

    printArray(arr, 5);

    int max = mountainPeak(arr, 5);

    cout << "Peak of the array is " << max << endl;
}