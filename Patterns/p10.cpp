#include<iostream>
using namespace std;

/* Pattern #26

   1
  121
 12321
1234321      */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {

        // Printing 1st Triangle (Spaces)

        int space1 = n1 - i1;
        while(space1) {
            cout<<" ";
            space1 = space1 - 1;
        }

        // Printing 2nd Triangle
        
        j1=1;
        while (j1<=i1) {
            cout<<j1;
            j1=j1+1;
        }

        // Printing 3rd Triangle

        int start1 = i1-1;
        while (start1){
            cout<<start1;
            start1 = start1 - 1;
        }
        
        cout<<endl;

        i1=i1+1;        
    }

/* Dabangg Pattern #27

1234554321
1234**4321
123****321
12******21
1********1   */

    int n2, i2, j2;

    cout<<"Enter no. of Rows : ";
    cin>>n2;

    i2=1;
    while (i2<=n2) {

        // Printing 1st Triangle

        j2=1;
        while(j2<=(n2-i2+1)){
            cout<<j2;
            j2=j2+1;
        }

        // Printing 2nd Triangle

        int start2 = i2-1;
        while(start2){
            cout<<"*";
            start2 = start2-1;
        }

        // Printing 3rd Triangle

        int start3 = i2-1;
        while(start3){
            cout<<"*";
            start3 = start3-1;
        }

        // Printing 4th Triangle

        int j=n2-i2+1;
        while(j) {
            cout<<j;
            j=j-1;
        }

        cout<<endl;

        i2=i2+1;
    }
    

    return 0;
}