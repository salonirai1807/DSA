#include<iostream>
using namespace std;

// nth term in Fibonacci Series.

int fibonacci(int n) {
    int a=0, b=1, c;

    for(int i=1 ; i<=n-2 ; i++) {
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

int main() {

    int n;
    cout<<"Enter term : ";
    cin>>n;

    int ans = fibonacci(n);
    cout<<"The nth term of Fibonacci series is : "<<ans;

    return 0;

}