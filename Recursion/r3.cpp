#include<iostream>

using namespace std;

bool isSorted(int arr[], int n) {
    // Base Condition
    if(n==0 || n==1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }

    else {
        return isSorted(arr+1, n-1);
    }
}

int main() {
    int arr[6] = {2,3,8,15,20,1};
    int n = 6;

    bool ans = isSorted(arr, n);

    if(ans) {
        cout << "SORTED! :)";
    }
    else {
        cout << "NOT SORTED! :(";
    }

    return 0;
}