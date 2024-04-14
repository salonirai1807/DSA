#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> s;

    s.push("Ashu");
    s.push("Mummy");
    s.push("Papa");
    s.push("Saloni");

    cout<<"Stack 's' : "<<endl;
    stack<string> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout<<endl<<endl;

    cout<<"Top Element is : "<<s.top()<<endl;
    cout<<"Stack 's' is empty or not : "<<s.empty()<<endl<<endl;

    return 0;
}