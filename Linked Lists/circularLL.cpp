#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class circularLL {
    Node* head;
    Node* tail;

public:
    circularLL() {
        head = tail = NULL;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertTail(int val) {
        Node* newNode = new Node(val);

        if(tail == NULL) {
            head = tail = newNode;
            tail->next = head;
        } else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void delHead() {
        if(head == NULL) {
            cout << "the linked list is empty" << endl;
            return;
        } else if(head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            
            temp->next = NULL;
            delete temp;
        }
    } 

    void delTail() {
        if(head == NULL) {
            cout << "the linked list is empty" << endl;
            return;
        } else {
            Node* temp = tail;
            
        }
    }

    void print() {
        if(head == NULL) {
            cout << "\n The linked list is empty" << endl;
            return;
        }

        cout << head->data << " -> ";
        Node* temp = head->next;

        while(temp != head) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << temp->data << endl;
    }
};

int main() {
    
    circularLL cll;
    cll.insertHead(5);
    cll.insertHead(4);
    cll.insertHead(3);
    cll.insertHead(2);
    cll.insertHead(1);

    cout << "The original linked list: " << endl;
    cll.print();

    cll.insertTail(420);
    cout << "The updated linked list: " << endl;
    cll.print();

    cll.delHead();
    cout << "The updated linked list after deleting at head: " << endl;
    cll.print();
    cout<<endl;
    return 0;
}