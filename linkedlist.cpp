// // /*why linked list ?
// // dyanamic memory allocation supportable in LL 
// // vector also follows the same but it is time consuming
// // LL is:
// // dynamic DS
// // no memory wastage like vector 
// // can grow can shrink
// // insertion and deletion is easy because of no shifting of elements
// // */
// // #include<iostream>
// // using namespace std;

// // class Node{
// //     public:
// //     int data;
// //     Node* next;

// //     //constructor
// //     Node(int data){
// //         this -> data = data;
// //         this -> next = NULL;
// //     }
// // };


// // void instertAtHead(Node* &head, int d){
// //     Node* temp = new Node(d);
// //     temp -> next = head;
// //     head = temp;
// // }

// // void insertAtTail(Node* &tail, int d){
// //     Node* temp = new Node(d);
// //     tail -> next = temp;
// //     tail = tail -> next;
// // }

// // void print(Node* &head){
// //     Node* temp = head;
// //     while(temp != NULL){
// //         cout << temp -> data << endl;
// //         temp = temp -> next;
// //     }
// //     cout << endl;
// // }

// // int main()
// // {
// //     //created a new node
// //     Node* node1 = new Node(10);
// //     // cout << node1 -> data << endl;
// //     // cout << node1 -> next << endl;

// //     //head pointed to node1
// //     Node* head = node1;
// //     Node* tail = node1;
// //     print(head);

// //     insertAtTail(head, 12);
// //     print(head);
    
// //     insertAtTail(head, 15);
// //     print(head);
    
// // }


#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBeginning(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d) {
    Node* temp = new Node(d);
    if (tail == NULL) {
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void deleteAtBeginning(Node* &head) {
    if (head == NULL)
        return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node* &head, Node* &tail) {
    if (head == NULL)
        return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    temp->next = NULL;
    tail = temp;
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    displayLinkedList(head);

    insertAtBeginning(head, 12);
    cout << "Linked List after insertion at the beginning" << endl;
    displayLinkedList(head);

    insertAtEnd(tail, 25);
    cout << "Linked List after insertion at the end" << endl;
    displayLinkedList(head);

    deleteAtBeginning(head);
    cout << "Linked List after deletion at the beginning" << endl;
    displayLinkedList(head);

    deleteAtEnd(head, tail);
    cout << "Linked List after deletion at the end" << endl;
    displayLinkedList(head);

    return 0;
}


/*#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert at the beginning of the linked list
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert at the end of the linked list
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting elements at the beginning
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);

    // Display the list
    cout << "Linked List after inserting at the beginning: ";
    list.display();

    // Inserting elements at the end
    list.insertAtEnd(4);
    list.insertAtEnd(5);
    list.insertAtEnd(6);

    // Display the list
    cout << "Linked List after inserting at the end: ";
    list.display();

    return 0;
}*/






