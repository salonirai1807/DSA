#include<iostream>

using namespace std;

// QUICK SORT

int partition(int arr[], int s, int e) {
    int pivot = arr[s];

    int count=0;
    for(int i=s+1 ; i<=e ; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    if(i<pivotIndex && j>pivotIndex) {
        swap(arr[i++], arr[j--]);
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    // Base Condition
    if(s >= e) {
        return ;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

void print(int arr[], int n) {
    for(int i=0 ; i<n ; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int arr[7] = {20,50,10,60,90,30,70};
    int n=7;

    cout << "Before Sorting - ";
    print(arr, n);

    quickSort(arr, 0, n-1);

    cout<< "After Sorting - ";
    print(arr, n);
}