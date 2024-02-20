#include<iostream>
using namespace std;

// Function for finding nCr.

int factorial(int n) {
    int fact = 1;

    for(int i=1 ; i<=n ; i++) {
        fact = fact*i;
    }

    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}

int main() {

    int n, r;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter r : ";
    cin>>r;

    cout<<" The Value of nCr is : "<<nCr(n, r);

    return 0;
}