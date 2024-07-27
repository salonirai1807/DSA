#include<iostream>

using namespace std;

// CHAR ARRAYS

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << "arr : " << arr <<endl;
    cout << "ch : " << ch <<endl;    // It will not return the address of the first element, rather the entire content of char 'ch'.

    char *c1 = &ch[0];
    cout << "&ch[0] : " << c1 <<endl;   // It is expected that it will return the addresss of the 1st element, but it'll not, rather it will start from the first element and goes on until it encounters the null character, and prints the entire content of char 'ch' unlike in case of int array.

    char temp = 'z';
    char *c2 = &temp;
    cout << "&temp : " << c2 <<endl;


    return 0;
}