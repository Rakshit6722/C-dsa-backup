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

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int temp = arr[i];
        
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if ( arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{

    int arr[6] = {10, 2, 3, 8, 7, 11};

    printArray(arr, 6);
    insertionSort(arr, 6);
    printArray(arr, 6);
}