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
            return;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
};

int main() {
    
    
    cout<<endl;
    return 0;
}