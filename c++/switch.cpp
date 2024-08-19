#include <iostream>
using namespace std;

int main()
{

    char button;
    cout << "Input a character";
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Ciao" << endl;
        break;
    case 'd':
        cout << "Salut" << endl;
        break;

    default:
    cout<<"I'm still learning more";
        break;
    }
    return 0;
}