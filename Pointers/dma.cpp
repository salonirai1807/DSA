#include<iostream>

using namespace std;

int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0 ; i<n ; i++) {
        sum += arr[i];
    }
    return sum;
}

// Dynamic Memory Allocation

int main() {
    int n;
    cout << "Enter no.of elements : ";
    cin>>n;

    // Dynamically creating a variable-sized array
    int *arr = new int[n];

    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    cout << endl << "Sum of elements of arr is : " << getSum(arr, n) << endl;

    return 0;
}