#include<iostream>
using namespace std;

/* Pattern #19

      *
    * *
  * * *
* * * *     */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {

        // Printing Spaces

        int space = n1 - i1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }    
        
        j1=1;
        while (j1<=i1) {
            cout<<"*";
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #20 

* * * *
* * *
* *
*          */

    int i2, j2, n2;

    cout<<"Enter No. of Rows : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=(n2-i2+1)) {
            cout<<"* ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

/* Pattern #21

* * * *
  * * *
    * *
      *      */

    int i3, j3, n3;

    cout<<"Enter No. of Rows : ";
    cin>>n3;

    i3=1;
    while(i3<=n3) {

        // Printing Spaces

        int spaces = i3 - 1;
        while(spaces) {
            cout<<" ";
            spaces = spaces - 1;
        }
        
        j3=1;
        while (j3<=(n3-i3+1)) {
            cout<<"*";
            j3=j3+1;
        }
        cout<<endl;

        i3=i3+1;        
    }
    
    return 0;
}