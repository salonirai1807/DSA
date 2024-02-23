#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    for(int i=0 ; i<size ; i+=2) {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

// Printing the Array

void printArray(int arr[], int size) {

    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int even[6] = {10, 20, 30, 40, 50, 60};
    int odd[5] = {10, 20, 30, 40, 50};

    cout<<"Original Array : ";
    printArray(even, 6);

    reverse(even, 6);
    cout<<"The Reversed Array is : ";
    printArray(even, 6);

    cout<<endl<<"Original Array : ";
    printArray(odd, 5);

    reverse(odd, 5);
    cout<<"The Reversed Array is : ";
    printArray(odd, 5);

    return 0;
}