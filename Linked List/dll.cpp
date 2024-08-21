#include <iostream>

using namespace std;

// DOUBLY LINKED LIST

class Node {
    public:

    int data;
    Node* prev;     // Pointer to the previous node.
    Node* next;     // Pointer to the next node.

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
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

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> prev << "|" << temp -> data << "|" << temp -> next << " , ";
        temp = temp->next;
    }
    cout << endl;
}


int getLength(Node* head) {
    int len = 0;

    Node* temp = head;

    while(temp != NULL) {
        len++;
        temp = temp->next;
    }

    return len;
}


// Insert at Start

void insertAtHead(Node* &head, Node* tail, int d) {
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else {
        Node* temp = new Node(d);

        temp->next = head;
        head -> prev = temp;
        head = temp;
    }
    
}


// Insert at End

void insertAtTail(Node* &tail, Node* head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else {
        Node* temp = new Node(d);

        tail->next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}


// Insert in Middle

void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {
    // Inserting at start
    if(pos == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < pos-1) {
        temp = temp->next;
        count++;
    }

    // Inserting at end
    if(temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    // Create a new node
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp -> next -> prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert -> prev = temp;
}


// Deletion

void deleteNode(Node* &head, int pos, Node* &tail) {
    if(pos == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    else {
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < pos) {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr -> next == NULL) {
            tail = prev;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
    }
}


int main() {
    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;

    print(head);

    insertAtHead(head, tail, 20);
    print(head);

    insertAtTail(tail, head, 30);
    print(head);

    insertAtPosition(head, tail, 3, 40);
    print(head);

    insertAtTail(tail, head, 50);
    print(head);

    deleteNode(head, 3, tail);
    print(head);

    cout << endl << "Data of head is : " << head->data << endl;
    cout << "Data of tail is : " << tail->data << endl;

    cout << "Length of the Linked List : " << getLength(head) << endl << endl;

    return 0;
}