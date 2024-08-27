#include<iostream>

using namespace std;

int main() {
    int a = 5;
    
    cout<<"Value of a is : "<< a <<endl;
    cout<<"Address of a is : "<< &a <<endl<<endl;


    double b = 3.14;
    double *ptr = &b;      // Pointer to 'double', which will store the address of b.
    
    // '*' is the Dereferencing Operator
    cout<<"Value of b is : "<< *ptr <<endl;   // It is the same as printning the value of b.
    cout<<"Address of b is : "<< ptr <<endl<<endl;  // It is the same as printning the value of Address of b.

    cout<<"Size of integer is : "<< sizeof(a) <<endl;
    cout<<"Size of double is : "<< sizeof(b) <<endl;
    cout<<"Size of pointer is : "<< sizeof(ptr) <<endl<<endl;   // Size of pointer will always be 4 bytes.


    int c = 10;

    int *pt = 0;
    pt = &c;           // These two lines are same as : int *p = &c

    cout<<"Value of c is : "<< *pt <<endl;
    cout<<"Address of c is : "<< pt <<endl<<endl;


    int num = 5;
    int *p = &num;
    int x = *p;    // It is exactly same as : int x = num;
    x++;

    cout<<"Value of num is : "<< num <<endl;
    cout<<"Value of x is : "<< x <<endl;

    (*p)++;
    cout<<"Value of num after incrementing is : "<< num <<endl<<endl;

    cout<<"Copying a pointer into another pointer."<<endl;

    int *q = p;
    cout<< *p << " - " << *q <<endl;       // Both 'p' & 'q' are pointing to num.
    cout<< p << " - " << q <<endl<<endl;

    int t = 8;
    int *p1 = &t;
    cout<<"Address of t (Before) : "<<p1<<endl;
    cout << "Value of *p1 will be : " << *p1 << endl;
    p1 = p1 + 1;
    cout<<"Address of t (After) : "<<p1 << endl;   // Since, size of 'int' is 4 bytes, it will be incremented by 4
    cout << "Value of *p1 now will be : " << *p1 << endl;   // Now p1 doesn't point to t anymore.

    return 0;
}