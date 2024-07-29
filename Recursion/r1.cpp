#include<iostream>

using namespace std;


int factorial(int n) {
    // Base Condition
    if(n == 0) {
        return 1;
    }

    // Recursive Statement
    int choti = factorial(n-1);
    int badi = n * choti;

    return badi;
}


int power(int x) {
    // Base Condition
    if(x == 0) {
        return 1;
    }

    // Recursive Statement
    return 2 * power(x-1);
}


void print(int a) {
    // Base Condition
    if(a == 0) {
        return ;
    }

    // Recursive Statement
    print(a-1);

    // Processing
    cout << a << " ";
}


void reachHome(int src, int dest) {
    cout << "Source : " << src << " Destination is : " << dest << endl;

    // Base Condition
    if(src == dest) {
        cout << "Reached!";
        return ;
    }

    // Processing
    src++;

    // Recursive Statement
    reachHome(src, dest);
}


int main() {
    int n;
    cout << "Enter a No. : ";
    cin>>n;

    int ans = factorial(n);

    cout << "Factorial of n is : " << ans << endl<<endl;


    int x;
    cout << "Enter a No. : ";
    cin>>x;

    int res = power(x);

    cout << "2 raised to the power x is : " << res << endl<<endl;


    int a;
    cout << "Enter a No. : ";
    cin>>a;

    cout << "Counting : ";
    print(a);
    cout << endl<<endl;

    int src;
    cout << "Enter Source : ";
    cin>>src;

    int dest;
    cout << "Enter Destination : ";
    cin>>dest;

    reachHome(src, dest);

    return 0;
}