#include<iostream>

using namespace std;

int fib(int n) {
    // Base Condition
    if(n==0) {
        return 0;
    }

    if(n==1) {
        return 1;
    }

    // Recursive Statement
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter nth term to be found : ";
    cin >> n;

    cout << "Nth term is : " << fib(n) << endl<<endl;

    return 0;
}