#include<iostream>
using namespace std;

void BinarySearch(int arr[], int size) {
    int start=0;
    int end=size-1;

    int key;
    cout<<"Enter the no. to be Searched : ";
    cin>>key;

    while(start<=end) {
        int mid=start + (end - start)/2;          // Optimised Version

        if(arr[mid]==key) {
            cout<<"Element Found at "<<mid<<" index.\n\n";
            break;
        }

        else if(key<arr[mid]) {
            end = mid - 1;
        }

        else if(key>arr[mid]) {
            start = mid + 1;
        }
    }

    if(start>end) {
        cout<<"The number, "<<key<<" is not found in the given Array";
    }
}

int main() {
    int even[6]={10,20,30,40,50,60};
    int odd[5]={10,20,30,40,50};

    BinarySearch(even, 6);
    BinarySearch(odd, 5);

    return 0;
}