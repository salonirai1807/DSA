#include<iostream>

using namespace std;

// CLIMB STAIR PROBLEM - You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time, you can climb either one step or two steps. You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

int climb(int n) {
    // Base Condition
    if(n<0) {
        return 0;
    }

    if(n==0) {
        return 1;
    }

    // Recursive Statement
    return climb(n-1) + climb(n-2);
}

// SAY DIGIT PROBLEM - You have been given a number of stairs. Initially, you are at the 0th stair, and you need to reach the Nth stair. Each time, you can climb either one step or two steps. You are supposed to return the number of distinct ways you can climb from the 0th step to the Nth step.

void printDigit(int n, string arr[]) {
    // Base Condition
    if(n==0) {
        return ;
    }

    // Processing
    int digit = n % 10;
    n = n/10;

    // Recursive Statement
    printDigit(n, arr);

    cout << arr[digit] << " ";
}

int main() {
    int n1;
    cout << "Enter nth step : ";
    cin >> n1;

    cout << "No. of possible ways are : " << climb(n1) << endl<<endl;


    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n2;
    cout << "Enter No. : ";
    cin >> n2;

    cout << "Output is : " <<endl;
    printDigit(n2, arr);

    return 0;
}