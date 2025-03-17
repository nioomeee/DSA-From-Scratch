//430 of leetcode 
//using recursion
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int val) {
        data = val;
        prev = child = next = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    Node* flatten(Node* head) {
        Node* curr = head;
        if(head == NULL) return head;

        while(curr != NULL) {
            if(curr->child != NULL) {
                Node* next = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while(curr->next != NULL) {
                    curr = curr->next;
                    if(next != NULL) {
                        curr->next = next;
                        next->prev = curr;
                    }
                }
            }
            curr = curr->next;
        }
    }
};

int main(){
    
    
    cout<<endl;
    return 0;
}