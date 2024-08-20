#include <iostream>

using namespace std;

// SINGLY LINKED LIST

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

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << "|" << temp -> next << " , ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at Start

void insertAtHead(Node* &head, int d) {
    // Create a new node
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

// Insert at End

void insertAtTail(Node* &tail, int d) {
    // Create a new node
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;             // (OR) tail = tail->next;
}

// Insert in Middle

void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {
    // Inserting at start
    if(pos == 1) {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    // Create a new node
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


// Deletion

void deleteNode(Node* &head, int pos, Node* &tail) {
    if(pos == 1) {
        Node* temp = head;
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

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
    }
}


int main() {
    Node* n1 =  new Node(10);
    Node* n2 =  new Node(1);

    // cout << "Data of n1 is : " << n1->data << endl;
    // cout << "Address of the next Node of n1 is : " << n1->next << endl;

    Node* head = n1;
    Node* tail = n1;

    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtTail(tail, 30);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, tail, 5, 50);
    print(head);

    deleteNode(head, 5, tail);
    print(head);    

    cout<<endl;

    cout << "Data of head is : " << head->data << endl;
    cout << "Data of tail is : " << tail->data << endl;

    return 0;
}