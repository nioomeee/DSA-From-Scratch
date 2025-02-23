// Q 206 - Leetcode
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node( int val ) {
        data = val;
        next = NULL;
    }
};

class List {
    
    Node* head;
    Node* tail;

public: 
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void reverseLL(){
        Node* prev = NULL;
        Node* curr = head;
        Node* nextptr = NULL;

        Node* temp = head;

        while ( curr != NULL ){

            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        
        head = prev;
    }

    void printLL(){
        if(head == NULL){
            cout<<"\n the linked list is empty"<<endl;
        } else {
            Node* temp = head;

            while (temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    cout<<"\n Original linked list: "<<endl;
    ll.printLL();

    cout<<"\n Reversed linked list: "<<endl;
    ll.reverseLL();
    ll.printLL();
    
    cout<<endl;
    return 0;
}