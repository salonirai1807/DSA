#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<string> q;

    q.push("Ashu");
    q.push("Mummy");
    q.push("Papa");
    q.push("Saloni");

    cout<<"Queue 'q' : "<<endl;
    queue<string> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout<<endl<<endl;

    cout<<"1st Element of the Queue is : "<<q.front()<<endl;
    cout<<"Last Element of the Queue is : "<<q.back()<<endl;
    cout<<"Queue 'q' is empty or not : "<<q.empty()<<endl<<endl;

    cout<<"Queue 'q' after popping an element : "<<endl;

    q.pop();

    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout<<endl<<endl;

    return 0;
}