#include<iostream>
using namespace std;

/* Pattern #9

1
2 3
3 4 6
4 5 6 7    */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        int value=i1;
        j1=1;
        while (j1<=i1) {
            cout<<value<<" ";
            value=value+1;
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #10 (Opposite of Pattern #9)

1
2 1
3 2 1
4 3 2 1    */

// We will do it without the use of 'value' variable (Unlike above)

    int i2, j2, n2;

    cout<<"Enter No. of Rows : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=i2) {
            cout<<i2-j2+1<<" ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;
    }

    return 0;
}