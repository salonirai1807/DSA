#include<iostream>

using namespace std;

// LINEAR SEARCH

bool linear(int arr[], int n, int key) {
    // Base Condition
    if(n==0) {
        return false;
    }

    if(arr[0] == key) {
        return true;
    }

    // Recursive Statement
    else {
        return linear(arr+1, n-1, key);
    }
}

int main() {
    int arr[6] = {2,3,8,15,20,1};
    int n = 6;

    int key;
    cout << "Enter Element to be Found : ";
    cin>>key;

    bool ans = linear(arr, n, key);

    if(ans) {
        cout << "FOUND! :)";
    }
    else {
        cout << "NOT FOUND! :(";
    }

    return 0;
}