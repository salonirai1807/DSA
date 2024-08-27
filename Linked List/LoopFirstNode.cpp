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


// Floyd's Cycle Detection Algorithm

Node* floydDetect(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && slow != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return fast;
        }
    }
    return NULL;
}


// Finding the starting node the Loop in th LL.

Node* loopFirstNode(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetect(head);

    if(intersection == NULL) {
        return NULL;
    }
    
    Node* fast = intersection;
    Node* slow = head;

    while(slow != fast) {
        slow = slow -> next;
        fast = fast -> next;
    }

    return slow;    
}


// Finding the starting node the Loop in th LL.

void removeLoop(Node* head) {
    if(head == NULL) {
        return;
    }

    Node* startNode = loopFirstNode(head);
    Node* temp = startNode;

    while (temp -> next != startNode) {
        temp = temp -> next;
    }

    temp -> next = NULL;    
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

    cout << "Starting Node of the loop is : " << loopFirstNode(head) -> data << endl;

    cout << endl << "Removing loop from the Linked List..." << endl;
    removeLoop(head);

    if(detectLoop(head)) {
        cout << endl << "Loop/Cycle is PRESENT..." << endl;
    } 

    else {
        cout << endl << "Loop/Cycle is NOT PRESENT..." << endl;
    }

    cout << "Starting Node of the loop is : " << loopFirstNode(head) -> data << endl;

    return 0;
}