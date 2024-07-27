#include<iostream>

using namespace std;

// Pass by Value - Here, a copy of the variable is passed to the function call and has its own separate memory.
void update1(int n) {
    n++;
}

// Pass by Reference - Here, the reference of the same variable is passed, and both share same memory.
void update2(int& n) {
    n++;
}

// Now, Let's see what practices are referred to as Bad Practices :-

// RETURN BY REFERNCE

int& f1(int x) {
    int num = x;
    int& ans = num;
    return ans;
}

int* f2(int x) {
    int *num = &x;
    return num;
}

int main() {
    int n=5;

    cout << "Pass by Value" << endl;
    cout << "n Before : " << n << endl;
    update1(n);
    cout << "n After : " << n << endl<<endl;

    cout << "Pass by reference" << endl;
    cout << "n Before : " << n << endl;
    update2(n);
    cout << "n After : " << n << endl<<endl;

    int x = 3;
    cout << f1(x) << endl;
    cout << f2(x) << endl<<endl;

    return 0;
}