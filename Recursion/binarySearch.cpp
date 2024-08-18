#include<iostream>

using namespace std;

// BINARY SEARCH

bool binary(int arr[], int s, int e, int key) {
    // Base Condition
    if(s>e) {
        return false;
    }

    int mid = (s+e)/2;

    if(arr[mid] == key) {
        return true;
    }

    // Recursive Statement
    if(arr[mid] > key) {
        e = mid-1;
        binary(arr, s, e, key);
    }

    else {
        s = mid+1;
        binary(arr, s, e, key);
    }
}

int main() {
    int arr[6] = {2,3,8,15,20,1};
    int n = 6;

    int key;
    cout << "Enter Element to be Found : ";
    cin>>key;

    bool ans = binary(arr, 0, 5, key);

    if(ans) {
        cout << "FOUND! :)";
    }
    else {
        cout << "NOT FOUND! :(";
    }

    return 0;
}