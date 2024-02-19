#include<iostream>
using namespace std;

// Function of Power

int power(int a, int b) {
    int ans=1;

    for(int i=1 ; i<=b ; i++) {
        ans = ans*a;
    }

    return ans;
}

int main() {

    int a, b;
    cout<<"Enter Base : ";
    cin>>a;
    cout<<"Enter Power : ";
    cin>>b;

    int ans = power(a,b);
    cout<<a<<"^"<<b<<" is : "<<ans;

    return 0;

}