#include<iostream>
using namespace std;

//convert to lowercase
char Convertlowercase(char ch){
    
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//check palindrome
bool palindrome(char chr[], int n){
    int s = 0;
    int e = n - 1;

    while(s<e){
        if(Convertlowercase(chr[s])==Convertlowercase(chr[e])){
            
            s++;
            e--;
        }
        else{
            return false;
        }
        return true;
    }
}

//reverse string
void reverseArray(char ch[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}

//getlength of string
int getlength(char chr[])
{
    int count = 0;
    for(int i = 0; chr[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char chr[20];
    cin>>chr;
    cout<<"Your name is "<<chr<<endl;
    int len = getlength(chr);
    cout<<"length - "<<len<<endl;

    bool pali = palindrome(chr, len);
    cout<<"Palindrome: "<<pali<<endl;

    reverseArray(chr,len);
    cout<<"Your name is "<<chr<<endl;

    cout<<"Your character is "<<Convertlowercase('E')<<endl;

    return 0;
}