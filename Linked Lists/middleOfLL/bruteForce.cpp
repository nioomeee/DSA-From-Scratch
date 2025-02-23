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

    void getMiddle(){
        Node* temp = head;
        if(head == NULL){
            cout<<"\n The linked list is empty"<<endl;
            return;
        }

        int size = 0;
        while( temp != NULL ){
            size++;
            temp = temp->next;
        }

        int middle = size / 2;

        temp = head;

        int count = 0;
        while( temp != NULL ){
            if(count == middle){
                cout<<temp->data<<endl;
                return;
            }
            count++;
            temp = temp->next;
        }
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

    cout << "\nFor odd number (5), the middle of linked list:" << endl;
    ll.getMiddle();

    ll.push_front(6);
    cout << "\nUpdated Linked List:" << endl;
    ll.printLL();

    cout << "\nFor even number (6), the middle of linked list:" << endl;
    ll.getMiddle();


    cout<<endl;
    return 0;
}