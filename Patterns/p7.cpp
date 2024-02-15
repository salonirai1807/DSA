#include<iostream>
using namespace std;

/* Pattern #17

A
B C
C D E
D E F G       */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        char start = 'A' + i1 - 1;
        j1=1;
        while (j1<=i1) {
            cout<<start<<" ";
            start = start + 1;
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #18 

D
C D
B C D
A B C D     */

    return 0;
}