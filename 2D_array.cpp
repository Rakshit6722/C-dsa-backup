#include <iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int n, int m){
     for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if (arr[n][m]==target){ 
                return 1; 
            } 
            
        }
     }
}


int main()
{
    // declaration
    int arr[3][4];

    // taking input -> row wise input
    // i = row, j = col
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input -> col wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        // //transpose
    //     for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    cout<<"enter the element to search "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"element found"; 
    }

    return 0;
}