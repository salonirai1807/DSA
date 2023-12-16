#include<iostream>
using namespace std;

// Check whether the given character is in upper case, lower case or non alphabetic character.

void check(char ch)
{
 
    if (ch >= 'A' && ch <= 'Z'){
        cout << ch << " is an UpperCase character"<<endl;
    }
 
    else if (ch >= 'a' && ch <= 'z'){
        cout << ch << " is a LowerCase character"<<endl;
    }
 
    else{
        cout << ch << " is not an alphabetic character."<<endl;
    }
}

int main()
{
    char ch;

    cout<<"Enter a Character : ";
    cin>>ch;

    check(ch);
 
    return 0;
}