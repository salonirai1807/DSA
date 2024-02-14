#include<iostream>
using namespace std;

// Sum of all Even Numbers in a given Range.

int main() {
    int ll, ul, sum;

    cout<<"Enter Lower Limit : ";
    cin>>ll;

    cout<<"Enter Upper Limit : ";
    cin>>ul;

    sum=0;

    for(int i=ll; (i>=ll && i<=ul); i++) {
        if(i%2==0) {
            sum=sum+i;
        }

        else {
            continue;
        }
    }

    cout<<"Sum is : "<<sum;
}