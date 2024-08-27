#include<iostream>

using namespace std;

// Pointers with Arrays

int main() {
    int arr[5] = {10, 20, 30, 40};

    // C++ considers the array name as the address of the first element of the array.
    cout<<"Address of first memory block of the Array is : "<< arr <<endl;
    cout<<"Value of First Element of Array is : "<< arr[0] <<endl;
    cout<<"Address of first memory block of the Array is : "<< &arr[0] <<endl<<endl;  // same as arr

    cout<<"*arr : "<< *arr <<endl;    // Value at first memory block of array
    cout<<"*arr + 1 : "<< *arr + 1 <<endl;
    cout<<"*(arr) + 1 : "<< *arr + 1 <<endl;
    cout<<"*(arr + 1) : "<< *(arr + 1) <<endl<<endl;   // Value at the 1st index of array.

    // General Formula :

    //      arr[i] = *(arr + i)
    //             (OR)
    //      i[arr] = *(i + arr)

    cout<<"arr[3] : "<< arr[3] <<endl;
    cout<<"*(arr + 3) : "<< *(arr + 3) <<endl;
    cout<<"2[arr] : "<< 2[arr] <<endl<<endl;

    int temp[5] = {12,23,34,45,56};
    cout << "Size of temp is : " << sizeof(temp) << endl;
    cout << "Size of 1st element of temp : " << sizeof(*temp) << endl;
    cout << "Size of address of 1st element of temp : " << sizeof(&temp) << endl;
    cout << "*temp : " << *temp << endl;
    cout << "temp : " << temp << endl;
    cout << "&temp : " << &temp << endl;
    cout << "&temp[0] : " << &temp[0] << endl<<endl;

    int *ptr = &temp[0];
    cout << "Size of Pointer : " << sizeof(ptr) << endl;
    cout << "Size of first element of temp : " << sizeof(*ptr) << endl;
    cout << "Size of address where the pointer is stored : " << sizeof(&ptr) << endl;
    cout << "ptr : " << ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    cout << "&ptr : " << &ptr << endl<<endl;

    // NOTE : Content of Symbol Table can't be changed. For ex :-

    int arr1[5] = {11,22,33,44,55};

    // arr1 = arr1 + 1;    (This statement will give error.)
    // But, it is permitted, if we increment a pointer by one.

    int *p = arr1;
    cout << "*p : " << *p <<endl;
    cout << "p Before : " << p <<endl;
    p = p+1;       // Now p points to arr[1] instead of arr[0].
    cout << "p After : " << p <<endl;
    cout << "*p : " << *p <<endl;

    return 0;
}