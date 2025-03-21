// Q 141 - Leetcode
#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{

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

    bool detectCycle(){
        Node* slow = head;
        Node* fast = head;

        while ( fast != NULL && fast->next != NULL ){
            slow = slow->next;
            fast = fast->next->next;

            if( slow == fast ){
                return true;
            }
        }
        return false;
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
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    cout << "\nOriginal Linked List:" << endl;
    ll.printLL();

    cout << "\nFor odd number (5):" << endl;
    if(ll.detectCycle()){
        cout<<"\n Cycle detected"<<endl;
    } else {
        cout<<"\n Cycle not detected"<<endl;
    }

    ll.push_front(6);
    cout << "\nUpdated Linked List:" << endl;
    ll.printLL();

    cout << "\nFor even number (6):" << endl;
    if(ll.detectCycle()){
        cout<<"\n Cycle detected"<<endl;
    } else {
        cout<<"\n Cycle not detected"<<endl;
    }


    cout<<endl;
    return 0;
}