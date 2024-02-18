#include<iostream>
using namespace std;

// Counting no. of 100, 50, 20 & 1 Rs Note for a given amount using Switch & Case.

int main() {

    int amount;
    cout<<"Enter Amount : ";
    cin>>amount;

    int Rs100=0, Rs50=0, Rs20=0, Rs1=0;

    switch(1) {
        case 1:
            Rs100=amount/100;
            amount=amount%100;
            cout<<"No. of 100 Rupee Notes : "<<Rs100<<endl;

        case 2:
            Rs50=amount/50;
            amount=amount%50;
            cout<<"No. of 50 Rupee Notes : "<<Rs50<<endl;

        case 3:
            Rs20=amount/20;
            amount=amount%20;
            cout<<"No. of 20 Rupee Notes : "<<Rs20<<endl;

        case 4:
            Rs1=amount/1;
            amount=amount%1;
            cout<<"No. of 1 Rupee Notes : "<<Rs1<<endl;
            break;

        default:
            cout<<"Enter an Amount.";
            break;
    }

    return 0;
}