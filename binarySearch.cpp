#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
        mid = start + (end -  start) / 2;
    }
    return -1;
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int even[6] = {2, 4, 6, 5, 10, 12};
    int odd[5] = {1, 3, 4, 5, 8};

    printArray(even, 6);
    printArray(odd, 5);

    int index = binarySearch(even, 6, 12);
    int index2 = binarySearch(odd, 5, 5);

    cout << "Index of even " << index << endl;
    cout << "Index of odd " << index2 << endl;
}