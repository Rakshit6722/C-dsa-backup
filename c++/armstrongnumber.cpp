#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a;

    for ( a = 2; a<=n; a++)
    { 
        
        if (n % a == 0)
        {
            cout<<"not prime";

        }

    }
    else{
        cout<<"prime";
    }
 
    return 0;
}
