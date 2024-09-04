#include <iostream>
#include <stack>

using namespace std;

class Stack {
    int* arr;
    int top;
    int size;

    public:

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if(size-top > 1) {
            top++;
            arr[top] = element;
        }

        else {
            cout << "Stack Overflow... Can't push" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        }

        else {
            cout << "Stack Underflow... Can't pop" << endl;
        }
    }

    int peak() {
        if(top >= 0) {
            return arr[top];
        }

        else {
            cout << "Stack is Empty..." << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }

        else {
            return false;
        }
    }
};

int main() {
    cout<< "Stack using STL" << endl;
    stack<int> s;

    s.push(11);
    s.push(22);
    s.push(33);

    cout << "Peak/Top element is : " << s.top() << endl;

    s.pop();

    cout << "Peak/Top element is : " << s.top() << endl;

    if(s.empty()) {
        cout << "Stack is EMPTY..." << endl;
    }

    else {
        cout << "Stack is NOT EMPTY..." << endl;
    }


    cout<< endl << "Stack implementation using Array" << endl;
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Peak/Top element is : " << st.peak() << endl;

    st.pop();

    cout << "Peak/Top element is : " << st.peak() << endl;

    if(st.isEmpty()) {
        cout << "Stack is EMPTY..." << endl;
    }

    else {
        cout << "Stack is NOT EMPTY..." << endl;
    }

    return 0;
}