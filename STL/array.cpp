#include<iostream>
#include<array>

using namespace std;

int main() {
    array<int, 4> a = {1, 2, 3, 4};
    int n = a.size();

    for(int i=0 ; i<n ; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"1st Element of the array is : "<<a.front()<<endl;
    cout<<"Last Element of the array is : "<<a.back()<<endl;
    cout<<"Element at 2nd Index is : "<<a.at(2)<<endl;
    cout<<"Array 'a' is empty or not : "<<a.empty()<<endl;
}