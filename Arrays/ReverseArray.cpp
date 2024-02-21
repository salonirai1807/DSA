#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int i=0;
    int j=size-1;

    while(i<=j) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
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
    int arr1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout<<"Original Array : ";
    printArray(arr1, 10);

    reverse(arr1, 10);
    cout<<"The Reversed Array is : ";
    printArray(arr1, 10);

    return 0;
}