#include<iostream>
#include<math.h>
using namespace std;

// Converting Decimal to Binary.

int main() {
    int n;
    cout<<"Enter a Decimal No. : ";
    cin>>n;

    int ans=0;
    int i=0;

    while(n!=0) {
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;

        n=n>>1;
        i++;
    }

    cout<<"Binary Equivalent is : "<<ans;

    return 0;
}