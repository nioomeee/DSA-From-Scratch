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
            newNode-> next = head;
            head = newNode;
        }
    }

    void searchLL(int val){

        Node* temp = head;
        int count = 0;
        while( temp != NULL ){

            if(temp->data == val){
                cout<<"\n Value "<<val<<" found at position "<<count<<endl;
                return;
            }
            temp = temp->next;
            count++;
        }

        cout<<"\n Value "<<val<<" not found in the linked list"<<endl;
        return;
    }

    void printLL() {
        Node* temp = head;

        if ( head == NULL ) {
            cout<<"\n the linked list is empty"<<endl;
            return;
        } else {
            while (temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
    
};

int main(){
    
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printLL();

    ll.searchLL(2);
    ll.searchLL(6);
    cout<<endl;
    return 0;
}