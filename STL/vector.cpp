#include<iostream>
#include<vector>

using namespace std;

int main() {
    // another way of declaration with defined size
    vector<int> a(5, 1);

    cout<<"Vector 'a' : "<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    // another way of declaration by copying an exsisting vector
    vector<int> b(a);

    cout<<"Vector 'b' : "<<endl;
    for(int i:b) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Vector 'v' : "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"Currently the capacity of Vector is : "<<v.capacity()<<endl;
    cout<<"Size of Vector is : "<<v.size()<<endl;

    cout<<"1st Element of the Vector is : "<<v.front()<<endl;
    cout<<"Last Element of the Vector is : "<<v.back()<<endl;
    cout<<"Element at 3rd Index is : "<<v.at(3)<<endl;
    cout<<"Vector 'v' is empty or not : "<<v.empty()<<endl<<endl;

    v.pop_back();

    cout<<"Vector after pop : "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before clear() : "<<v.size()<<endl;

    v.clear();

    cout<<"Size after clear() : "<<v.size()<<endl;
}