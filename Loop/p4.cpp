#include<iostream>
using namespace std;

// Sum of first 'n' Natural Numbers.

int main() {
    int n, i, flag=1;

    cout<<"Enter No. : ";
    cin>>n;

    i=2;
    while(i<n) {
        if(n%i==0) {
            flag=0;
        }
        i=i+1;
    }

    if(flag==0) {
        cout<<n<<" is not Prime";
    }

    else if(flag==1) {
        cout<<n<<" is Prime";
    }

    return 0;
}