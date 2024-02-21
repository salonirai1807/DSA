#include<iostream>
#include<limits.h>
using namespace std;

// Printing elements of the Array.

void printArray(int arr[], int size) {

    cout<<"Printing the array : "<<endl;

    for(int i=0 ; i<size ; i++) {
        cout<<arr[i]<<" ";
    }
}

// Finding the Maximum element in an Array.

int getmax(int arr[], int size) {
    int max = INT_MIN;

    for(int i=0 ; i<size ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        // OR

        // maxx = max(maxx, arr[i])
    }
    return max;
}

// Finding the Minimum element in an Array.

int getmin(int arr[], int size) {
    int min = INT_MAX;

    for(int i=0 ; i<size ; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr1[5]={10, 20, 30, 40, 50};

    int size1 = sizeof(arr1)/sizeof(int);

    printArray(arr1, size1);


    int arr2[50];
    int size2;
    cout<<endl<<endl<<"Enter the size : ";
    cin>>size2;

    for(int i=0 ; i<size2 ; i++) {
        cout<<"Element no. "<<i+1<<" : ";
        cin>>arr2[i];
    }

    cout<<"The maximum value of the Array is : "<<getmax(arr2, size2)<<endl;
    cout<<"The minimum value of the Array is : "<<getmin(arr2, size2)<<endl;

    return 0;
}