#include<iostream>

using namespace std;

int updateVal(int *ptr) {
    *ptr = *ptr + 1;
}

int updatePtr(int *ptr) {
    ptr = ptr + 1;
}

int getSum(int arr[], int n) {       // We could also write it as : int getSum(int *arr, int n)
    cout << "Size of arr is : " << sizeof(arr) << endl;    // It returns the size of the address of 1st element.

    int sum=0;
    for(int i=0 ; i<n ; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int x = 5;
    int *ptr = &x;

    cout<< "x Before : " << x << endl;
    updateVal(ptr);
    cout<< "x After : " << x <<endl<<endl;

    cout<< "ptr Before : " << ptr << endl;
    updateVal(ptr);
    cout<< "ptr After : " << ptr <<endl<<endl;


    int arr[5] = {1,2,3,4,5};

    cout << "Sum is : " << getSum(arr, 5);

    return 0;
}