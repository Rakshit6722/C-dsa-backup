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

int bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

//Optimised Code
int OptimisedbubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main()
{

    int arr[5] = {10, 2, 4, 1, 6};

    printArray(arr, 5);
    bubbleSort(arr, 5);
    printArray(arr, 5);
}