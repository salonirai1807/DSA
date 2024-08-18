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

    // Recursive Statement
    else {
        return isSorted(arr+1, n-1);
    }
}

int getSum(int arr[], int n) {
    // Base Condition
    if(n==0) {
        return 0;
    }

    if(n==1) {
        return arr[0];
    }

    // Recursive Statement
    int rem = getSum(arr+1, n-1);
    int sum = arr[0] + rem;
    return sum;
}

int main() {
    int arr[6] = {2,3,8,15,20,1};
    int n1 = 6;

    bool ans = isSorted(arr, n1);

    if(ans) {
        cout << "SORTED! :)";
    }
    else {
        cout << "NOT SORTED! :(";
    }


    int arr1[5] = {1,2,3,4,5};
    int n2 = 5;

    cout << endl << endl << "Sum of Array is : " << getSum(arr1, n2);

    return 0;
}