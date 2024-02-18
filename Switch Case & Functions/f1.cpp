#include<iostream>
using namespace std;

// Mini calculator using Switch & Case

int main() {

    int a, b;

    cout<<"Enter a : ";
    cin>>a;

    cout<<"Enter b : ";
    cin>>b;

    char op;
    cout<<"Enter op : ";
    cin>>op;

    switch (op)
    {
        case '+':
            cout<<"a + b is : "<<a+b;
            break;

        case '-':
            cout<<"a - b is : "<<a-b;
            break;

        case '*':
            cout<<"a * b is : "<<a*b;
            break;

        case '/':
            cout<<"a / b is : "<<a/b;
            break;

        case '%':
            cout<<"a % b is : "<<a%b;
            break;
    
        default:
            cout<<"Please enter a valid operation.";
            break;
    }

    return 0;
}