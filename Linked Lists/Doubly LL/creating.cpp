#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList {
    Node* head;
    Node* tail;
public: 
    DoublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

    }

    void pop_front() {
        if(head == NULL) {
            cout << "The doubly linked list is empty" << endl;
            return;
        }

        Node* temp = head;

        head =  head->next;

        if(head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back() {
        if(head == NULL) {
            cout << "\nThe linked list is empty" << endl;
            return;
        }
        Node* temp = tail;

        tail = tail->prev;

        if(tail != NULL){
            tail->next = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }

    void print() {
        if(head == NULL) {
            cout << "The linked list is empty" <<endl;
            return;
        }

        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data <<" <=> "; 
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    
    DoublyList dll;
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    cout << "\n Og linked list: " << endl;
    dll.print();

    dll.push_back(400);
    dll.push_back(560);
    
    cout << "Updated Linked list: " << endl;
    dll.print();

    dll.pop_front();
    cout << "Updated Linked list after pop_front: " << endl;
    dll.print();

    dll.pop_back();
    cout << "Updated Linked list after pop_back: " << endl;
    dll.print();

    cout << endl;
    return 0;
}