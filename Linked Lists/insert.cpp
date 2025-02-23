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

    void insertMiddle(int val, int pos){
        Node* temp = head;
        if(pos < 0){
            cout<<"\n Enter valid position"<<endl;
            return;
        }else if(pos == 0){
            push_front(val);
            return;
        }else{
            for( int i = 0; i < pos-1; i++ ){
                if(temp == NULL){
                    cout<<"\n Invalid position"<<endl;
                    return;
                }
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            newNode-> next = temp->next;
            temp->next = newNode;
        }
    }

    void printLL(){
        if(head == NULL){
            cout<<"The linked list is empty"<<endl;
        } else {
            Node* temp = head;

            while( temp != NULL ){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }

};

int main(){
    
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();

    ll.insertMiddle(4, 1);

    ll.printLL();
    cout<<endl;
    return 0;
}