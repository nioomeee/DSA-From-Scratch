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

    Node* getMiddle() {
        Node* slow = head;
        Node* fast = head;

        if(head == NULL) {
            cout << "the linked list is empty";
            return NULL;
        }

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }

    Node* merge(Node* left, Node* right) {
        if(!left) return right;
        if(!right) return left;

        Node* result;
        if(left->data < right->data) {
            result = left;
            result->next = merge(left->next, right);
        } else {
            result = right;
            result->next = merge(left, right->next);
        }
        return result;
    }

    Node* mergeSort(Node* head) {
        if(!head || head->next) return NULL;

        // step 1 is to find the middle of the list
        Node* mid = getMiddle();
        Node* left = head;
        Node* right = mid->next;

        mid->next = NULL; //it'll break the list in 2 halves

        // step 2 is to recursively sort both the halves
        left = mergeSort(left);
        right = mergeSort(right);

        // Main and final step being - merge the sorted halves
        return merge(left, right);
    }
};

int main() {
    
    Node* head = new Node(4);
    head->next = new Node(3);
    head->next = new Node(2);
    head->next = new Node(1);

    

    cout<<endl;
    return 0;
}