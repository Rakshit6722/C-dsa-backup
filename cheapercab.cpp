// #include<iostream>
// using namespace std;

// int main(){

//     int t;
//     cin>>t;

//     for(int i=1; i<=t; i++){
//         int a, b;
//         cin>>a>>b;

//         if(a>b) cout<<"SECOND"<<endl;
//         else if(b>a) cout<<"FIRST"<<endl;
//         else cout<<"ANY"<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here

// 	int t;
// 	cin>>t;

// 	for(int a = 0; a < t; a++){
// 	    int i, f, sub;
// 	    cin>>i>>f;

// 	    if(i>f) {
// 	        sub = i - f; cout<<sub<<endl;}
// 	    else if(f>i) {
// 	        sub = f - i; cout<<sub<<endl;}
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < 4; i++){
        
        if(arr[i]>=10){
            sum++;
        }
        else{
            continue;
        }
        
    }
    cout<<sum<<endl;
}
