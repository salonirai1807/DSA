#include<iostream>
#include<deque>

using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(0);
    d.push_front(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    d.pop_front();

    cout<<"Deque 'd' : "<<endl;
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    cout<<"1st Element of the Vector is : "<<d.front()<<endl;
    cout<<"Last Element of the Vector is : "<<d.back()<<endl;
    cout<<"Element at 3rd Index is : "<<d.at(3)<<endl;
    cout<<"Vector 'v' is empty or not : "<<d.empty()<<endl<<endl;

    d.erase(d.begin());     // 0 will be erased
    d.erase(d.begin(), d.begin()+2);     // 1, 2 will be erased

    cout<<"Deque 'd' after erase : "<<endl;
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    return 0;
}