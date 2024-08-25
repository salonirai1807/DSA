#include <iostream>

using namespace std;

// CIRCULAR LINKED LIST

// Implementation of a Node
class Node {
    public:

    int data;
    Node* next;     // Pointer to the next node.

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed for node with data : " << value <<endl;
    }
};


// Traversal

void print(Node* tail) {
    Node* temp = tail;

    if(tail == NULL) {
        cout << "List is empty..."<<endl;
        return;
    }

    do {
        cout << tail -> data << "|" << tail -> next << " , ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}


// Inserting a Node

void insertNode(Node* &tail, int element, int d) {
    // Empty List
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    // Assuming that the element is present in the list (Non-Empty List)
    else {
        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;         // curr is representing the element wala node
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


// Deletion

void deleteNode(Node* &tail, int value) {
    // Empty List
    if(tail == NULL) {
        cout << "List is empty..."<<endl;
    }

    // Non-Empty List (Assuming 'value' is present in the list)
    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr -> data != value) {
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;

    // Linked List with a single node.
    if(curr == prev) {
        tail = NULL;
    }

    // Linked List with more than one node.
    if(tail == curr) {
        tail = prev;
    }
    curr -> next = NULL;
    delete curr;
}


// To check whether Linked List is Circular or Not

bool isCircular(Node* tail) {
    if(tail == NULL) {
        return true;
    }

    Node* temp = tail -> next;

    while(temp != NULL && temp != tail) {
        temp = temp -> next;
    }

    if(temp == tail) {
        return true;
    }

    return false;
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 30, 10);
    print(tail);

    insertNode(tail, 10, 20);
    print(tail);

    insertNode(tail, 10, 30);
    print(tail);

    insertNode(tail, 30, 40);
    print(tail);

    insertNode(tail, 20, 50);
    print(tail);

    if(isCircular(tail)) {
        cout << endl << "Linked List is Circular in nature..." << endl << endl;
    } 

    else {
        cout << endl << "Linked List is NOT Circular in nature..." << endl << endl;
    } 

    deleteNode(tail, 10);
    print(tail);

    return 0;
}