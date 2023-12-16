#include<iostream>
using namespace std;

// FIBONACCI SERIES

int main() {
    int a=0, b=1, c, n;

    cout<<"Enter No. of terms : ";
    cin>>n;
    cout<<endl;

    for(int i=1; i<=n; i++) {
        if(i==1) {
            cout<<a;
            continue;
        }
        if(i==2) {
            cout<<", "<<b;
            continue;
        }
        else {
            c=a+b;
            cout<<", "<<c;
            a=b;
            b=c;
        }
    }

    return 0;
}