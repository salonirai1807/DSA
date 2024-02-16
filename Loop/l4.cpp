#include<iostream>
using namespace std;

// To check whether a no. is prime or not.

int main() {
    int n, flag=1;

    cout<<"Enter No. : ";
    cin>>n;

    for(int i=2 ; i<=(n-1) ; i++) {
        if(n%i==0) {
            flag=0;
        }
    }

    if(flag==0) {
        cout<<n<<" is not Prime";
    }

    else if(flag==1) {
        cout<<n<<" is Prime";
    }

    return 0;
}