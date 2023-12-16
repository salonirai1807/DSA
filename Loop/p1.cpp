#include<iostream>
using namespace std;

// Sum of first 'n' Natural Numbers.

int main() {
    int n, i, sum;

    cout<<"Enter No. : ";
    cin>>n;

    sum=0;
    i=1;
    cout<<sum<<" ";

    while(i<=n) {
        sum=sum+i;
        i=i+1;
        cout<<sum<<" ";
    }

    return 0;
}