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
public:
   
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode-> next = head;
            head = newNode;
        }
    }

    Node* reverseK(Node* &head, int k) {
        if(head == NULL) {
            return NULL;
        }

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        int count = 0;
        while ( curr != NULL && count < k ){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL){
            head->next = reverseK(next, k);
        }

        return prev;
    }

    void printLL() {
        Node* temp = head;

        if ( head == NULL ) {
            cout<<"\n the linked list is empty"<<endl;
            return;
        } else {
            while (temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
    
};

int main(){
    
    List ll;
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();
    int k = 3;
    ll.head = ll.reverseK(ll.head, k);
    cout << "\nReversed in K-groups (k=" << k << "): " << endl;
    ll.printLL();

    cout<<endl;
    return 0;
}