#include<iostream>

using namespace std;

// BUBBLE SORT

void sort(int arr[], int n) {
    // Base Condition
    if(n==0 || n==1) {
        return ;
    }

    for(int i=0 ; i<n-1 ; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    sort(arr, n-1);
}


// MERGE SORT

void merge(int arr[], int s, int e) {
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    // Copying content of the array into its constituent 2 subarrays.

    int k = s;              // k - The indexing we will follow for the main merged array.
    for(int i=0 ; i<len1 ; i++) {
        arr1[i] = arr[k++];
    }

    k = mid+1;
    for(int i=0 ; i<len2 ; i++) {
        arr2[i] = arr[k++];
    }

    // Merge Sorted Subarrays
    int i1 = 0;
    int i2 = 0;
    k = s;

    while(i1 < len1 && i2 < len2) {
        if(arr1[i1] < arr2[i2]) {
            arr[k++] = arr1[i1++];
        }
        else{
            arr[k++] = arr2[i2++];
        }
    }

    while(i1 < len1) {
        arr[k++] = arr1[i1++];
    }

    while(i2 < len2) {
        arr[k++] = arr2[i2++];
    }

    delete []arr1;
    delete []arr2;
}

void mergeSort(int arr[], int s, int e) {
    // Base Condition
    if(s >= e) {
        return ;
    }

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

void print(int arr[], int n) {
    for(int i=0 ; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int arr[5] = {2,5,1,6,9};
    int n=5;

    cout << "Bubble Sort..." << endl;

    cout << "Before Sorting - ";
    print(arr, n);

    sort(arr, n);

    cout<< "After Sorting - ";
    print(arr, n);


    cout << endl << "Merge Sort..." << endl;
    
    int arr1[5] = {20,50,10,60,90};
    int n1=5;

    cout << "Before Sorting - ";
    print(arr1, n1);

    sort(arr1, n1);

    cout<< "After Sorting - ";
    print(arr1, n1);

    return 0;   
}