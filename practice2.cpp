#include <iostream>
using namespace std;

bool Present(int arr[][4], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
                
            }
            
        }
    }
    return 0;
}

int main()
{
    // int n, m;
    // cin >> n >> m;
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // cout<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout<<endl;

    // // transpose
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    int target;
    cin >> target;

    if(Present(arr,target)){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}