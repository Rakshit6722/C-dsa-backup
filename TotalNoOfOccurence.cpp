#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
             ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int LastOccurence(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == k)
        {
             ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[6] = {1, 2, 3, 3, 3, 3};

    int first = FirstOccurence(arr, 6, 3);
    int last = LastOccurence(arr, 6, 3);
    int result;

    if (first == -1 && last == -1)
    {
        result = 0;
    }
    else
    {
        result = (last - first) + 1;
    }

    cout << result;
}



