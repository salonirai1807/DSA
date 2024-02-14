#include<iostream>
using namespace std;

/* Pattern #11

A A A
B B B
C C C       */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        j1=1;
        while (j1<=n1) {
            char ch1 = 'A' + i1 - 1;
            cout<<ch1<<" ";
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #12

A B C
A B C
A B C       */

    int i2, j2, n2;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=n2) {
            char ch2='A' + j2 -1;
            cout<<ch2<<" ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

/* Pattern #13

A B C
D E F
G H I       */

    int i3, j3, n3;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n3;

    char start='A';
    i3=1;
    while(i3<=n3) {
        j3=1;
        while (j3<=n3) {
            cout<<start<<" ";
            start=start+1;
            j3=j3+1;
        }
        cout<<endl;

        i3=i3+1;        
    }

    return 0;
}