#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, temp;
    cout << "Enter the Number=";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        cout << "Number is Palindrome.";
    else
        cout << "Number is not Palindrome.";
    return 0;
}

//Dynamic Memory Allocation
//C++ allow us to allocate the memory of a vairable or an array in runtime, this is known as dynamic memory allocation.
//In other programming languages like java and python the compiler automatically manage the memory allocated to variable but this is not in case of C++.
//In C++ we need to dealocate the dynamiclly alocated memory manually after we have no use for the  variable. Wr can alocate and dealocate by using "new" and "delete" operator.