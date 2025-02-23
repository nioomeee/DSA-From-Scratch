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
    cout<<endl;
    return 0;
}