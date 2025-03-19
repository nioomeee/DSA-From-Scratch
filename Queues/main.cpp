// queues have 3 main functions -
// 1. push - push to back
// 2. pop - pop from front
// 3. front - giev the front value
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
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front() {
        if(head == NULL) {
            cout << "Stcak empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    int front() {
        if(head != NULL) {
            return head->data;
        } 
         
        return -1;
    }
};

class Queue {
public:
    List l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_front();
    }

    int front() {
        return l.front();
    }

    bool isEmpty() {
        return l.head == NULL; //returns true is it is empty
    }

};

int main() {
    
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while(!q.isEmpty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    cout<<endl;
    return 0;
}