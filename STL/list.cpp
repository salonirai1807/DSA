#include<iostream>
#include<list>

using namespace std;

int main() {
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(0);
    l.push_front(3);
    l.push_back(4);

    l.erase(l.begin());

    cout<<"List 'l' : "<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    cout<<"Size of List 'l' is : "<<l.size()<<endl<<endl;

    // another way of declaration with defined size
    list<int> li(5, 9);

    cout<<"List 'li' : "<<endl;
    for(int i:li) {
        cout<<i<<" ";
    }


    return 0;
}