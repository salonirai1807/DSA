#include<iostream>

using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i=0 ; i<row ; i++) {
        for(int j=0 ; j<col ; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr1[3][3];
    int arr2[3][2];

    // Taking input Row-wise
    cout<<"Enter elements row-wise : "<<endl;
    for(int row=0 ; row<3 ; row++) {
        for(int col=0 ; col<3 ; col++) {
            cin>>arr1[row][col];
        }
    }
    cout<<endl;

    // Printing
    for(int row=0 ; row<3 ; row++) {
        for(int col=0 ; col<3 ; col++) {
            cout<<arr1[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Let's perform searching operation..."<<endl<<endl;
    int target;
    cout<<"Enter element to be searched : ";
    cin>>target;
    if(isPresent(arr1, target, 3, 3)) {
        cout<<"Found!";
    }
    else {
        cout<<"Not Found :("<<endl<<endl;
    }
    cout<<endl<<endl;

    // Taking input Column-wise
    cout<<"Enter elements column-wise : "<<endl;
    for(int col=0 ; col<2 ; col++) {
        for(int row=0 ; row<3 ; row++) {
            cin>>arr2[row][col];
        }
    }
    cout<<endl;

    // Printing
    for(int row=0 ; row<3 ; row++) {
        for(int col=0 ; col<2 ; col++) {
            cout<<arr2[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}