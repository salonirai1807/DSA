#include <iostream>
#include <map>

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

// Insert at End

void insertAtTail(Node* &tail, int d) {
    // Create a new node
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;             // (OR) tail = tail->next;
}


// To check whether Loop/Cycle is present in the Linked List or not.

bool detectLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while(temp != NULL) {
        if(visited[temp] == true) {
            cout << "Present on element : " << temp -> data;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}


int main() {
    Node* n1 =  new Node(10);

    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail, 20);

    insertAtTail(tail, 30);

    insertAtTail(tail, 40);

    insertAtTail(tail, 50);
    print(head);
    cout << endl;

    tail -> next = head -> next -> next;

    if(detectLoop(head)) {
        cout << endl << "Loop/Cycle is PRESENT..." << endl;
    } 

    else {
        cout << endl << "Loop/Cycle is NOT PRESENT..." << endl;
    }

    cout<<endl;

    cout << "Data of head is : " << head->data << endl;
    cout << "Data of tail is : " << tail->data << endl;

    return 0;
}