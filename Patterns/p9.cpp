#include<iostream>
using namespace std;

/* Pattern #22

1 1 1 1
  2 2 2
    3 3
      4     */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {

        // Printing Spaces

        int space1 = i1 - 1;
        while(space1) {
            cout<<" ";
            space1 = space1 - 1;
        }    
        
        j1=1;
        while (j1<=(n1-i1+1)) {
            cout<<i1;
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #23 

      1
    2 2
  3 3 3
4 4 4 4     */

    int i2, j2, n2;

    cout<<"Enter No. of Rows : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {

        // Printing Spaces

        int space2 = n2 - i2;
        while (space2){
            cout<<" ";
            space2 = space2 - 1;
        }
        
        j2=1;
        while (j2<=i2) {
            cout<<i2;
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

/* Pattern #24

1 2 3 4
  2 3 4
    3 4
      4      */

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
        int count = i3;
        while (j3<=(n3-i3+1)) {
            cout<<count;
            count = count + 1;
            j3=j3+1;
        }
        cout<<endl;

        i3=i3+1;        
    }

/* Pattern #25

      1
    2 3
  4 5 6
7 8 9 10     */

    int i4, j4, n4;

    cout<<"Enter No. of Rows : ";
    cin>>n4;

    i4=1;
    int start = 1;
    while(i4<=n4) {

        // Printing Spaces

        int space4 = n4 - i4;
        while (space4){
            cout<<" ";
            space4 = space4 - 1;
        }
        
        j4=1;
        while (j4<=i4) {
            cout<<start;
            start = start +1;
            j4=j4+1;
        }
        cout<<endl;

        i4=i4+1;
    }
    
    return 0;
}