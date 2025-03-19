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

class List {
public:

    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back() {
        if(head == tail) { //single element
            delete head;
            head = tail = NULL;
            return;
        }

        if(head == NULL) { //empty list
            cout << "The linked list is empty" <<endl;
            return;
        }

        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        temp->next = NULL;
        tail = temp;
    }

    int top() {
        if(tail == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return tail->data;
    }
};

class Stack {
public:
    List l;

    void pushval(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_back();
    }

    int top() {
        return l.top();
    }

    bool isEmpty() {
        return l.head == NULL;
    }
};

int main() {
    
    Stack s;

    s.pushval(10);
    s.pushval(20);
    s.pushval(30);
    s.pushval(40);
    s.pushval(50);

    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout<<endl;
    return 0;
}