#include<iostream>

using namespace std;

// Double Pointers

int update(int **p2) {
    // p2 = p2 + 1;
    // Will it make a difference in main function p2? - No.

    // *p2 =  *p2 + 1;
    // Will it make a difference in main function p1? - Yes. (Value of p1 will change)

    **p2 = **p2 + 1;
    // Will it make a difference in main function x? - Yes. (5 -> 6)
}

int main() {
    int x = 5;
    int *p1 = &x;
    int **p2 = &p1;

    // Ways of Printing the value of x.

    cout << "Ways of Printing the value of x" << endl;
    cout << "x : " << x << endl;
    cout << "*p1 : " << *p1 << endl;
    cout << "**p2 : " << **p2 << endl<<endl;

    // Ways of Printing the value of p1.

    cout << "Ways of Printing the value of p1" << endl;
    cout << "&x : " << &x << endl;
    cout << "p1 : " << p1 << endl;
    cout << "*p2 : " << *p2 << endl<<endl;

    // Ways of Printing the value of p2.

    cout << "Ways of Printing the value of p2" << endl;
    cout << "&p1 : " << &p1 << endl;
    cout << "p2 : " << p2 << endl<<endl;

    // Double Pointers & Functions.

    cout << "x Before : " << x << endl;
    cout << "p1 Before : " << p1 << endl;
    cout << "p2 Before : " << p2 << endl;

    update(p2);

    cout << "x After : " << x << endl;
    cout << "p1 After : " << p1 << endl;
    cout << "p2 After : " << p2 << endl<<endl;

    return 0;
}