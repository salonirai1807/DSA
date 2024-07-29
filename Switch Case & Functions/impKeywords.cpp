#include<iostream>

using namespace std;

// Macros
#define PI 3.14

// Inline Function
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

// Default Arguements
void print(int arr[], int n, int start=0) {
    for(int i=start ; i<n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int r = 5;
    double area = PI * r * r;

    cout << endl << "Area of Circle is : " << area << endl << endl;


    int a = 1, b = 2;
    cout << getMax(a,b) << endl;

    a = a+3;
    b = b+1;

    cout << getMax(a,b) << endl << endl;

    
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    print(arr, size);
    print(arr, size, 2);

    return 0;
}