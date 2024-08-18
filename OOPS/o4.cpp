#include <iostream>

using namespace std;

// POLYMORPHISM

// Compile-Time / Static Polymorphism

// 1. Function Overloading

class add {
    public:

    int sum(int a, int b) {
        return a+b;
    }

    int sum(int a, int b, int c) {
        return a+b+c;
    }
};

// 2. Operator Overloading

class A {
    public:

    int a;
    int b;

    void operator+ (A &obj) {
        int val1 = this->a;
        int val2 = obj.a;

        cout << "Output is : " << val2 - val1 << endl;
    }

    void operator() () {
        cout << "Mai bracket hu... And the value of my a is : " << this->a<<endl;
    }
};


// Run-Time / Dynamic Polymorphism

// 1. Function / Method Overriding

class parent {
    public:

    void print() {
        cout << "In Parent Class..." << endl;
    }
};

class subclass : public parent {
    public:

    void print() {
        cout << "In SubClass..." << endl;
    }
};

int main() {
    add a1;
    cout<<"2+3 = "<<a1.sum(2,3)<<endl;
    cout<<"2+3+5 = "<<a1.sum(2,3,5)<<endl<<endl;

    A obj1, obj2;
    obj1.a=4;
    obj2.a=7;
    obj1 + obj2;

    obj1();
    cout<<endl;

    subclass s;
    s.print();

    return 0;
}