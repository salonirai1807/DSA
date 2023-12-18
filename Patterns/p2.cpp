#include<iostream>
using namespace std;

/* Pattern #3

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5    */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        j1=1;
        while (j1<=n1) {
            cout<<j1<<" ";
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }


/* Pattern #4

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1    */

    int i2, j2, n2;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=n2) {
            cout<<n2-j2+1<<" ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

/* Pattern #5

1 2 3
4 5 6
7 8 9    */

    int i3, j3, n3;

    cout<<"Enter No. of Rows & Columns : ";
    cin>>n3;

    int count=1;
    i3=1;
    while(i3<=n3) {
        j3=1;
        while (j3<=n3) {
            cout<<count<<" ";
            count=count+1;
            j3=j3+1;
        }
        cout<<endl;

        i3=i3+1;        
    }

    return 0;
}