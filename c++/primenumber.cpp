#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a;
    for (int a = 2; a < n; a++)
    {
        if (n % a == 0)
        {
            cout << "Non Prime" << endl;
            // break;
        }
        else{
            cout<<"Prime";
        }
    }
    // if (a == n)
    // {
    //     cout << "Prime Number";
    // }

    return 0;
}