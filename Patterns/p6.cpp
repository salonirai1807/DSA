#include<iostream>
using namespace std;

/* Pattern #14

A B C
B C D
C D E       */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        char start = 'A' + i1 - 1;
        j1=1;
        while (j1<=n1) {
            cout<<start<<" ";
            start = start + 1;
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #15

A 
B B
C C C       */

    int i2, j2, n2;

    cout<<"Enter No. of Rows : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=i2) {
            char ch2='A' + i2 -1;
            cout<<ch2<<" ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

/* Pattern #16

A 
B C
D E F
G H I J      */

    int i3, j3, n3;

    cout<<"Enter No. of Rows : ";
    cin>>n3;

    char start='A';
    i3=1;
    while(i3<=n3) {
        j3=1;
        while (j3<=i3) {
            cout<<start<<" ";
            start=start+1;
            j3=j3+1;
        }
        cout<<endl;

        i3=i3+1;        
    }

    return 0;
}