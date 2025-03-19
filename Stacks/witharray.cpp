#include<iostream>
using namespace std;

class Stack{
    int arr[10];    
    int topindex;

public:
    Stack() {
        topindex = -1;
    } 

    void pushval(int val) {

        if(topindex >= 9) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++topindex] = val;
    }

    void pop() {

        if(topindex < 0) {
            cout << "Stack underflow" << endl;
            return;
        }

        topindex--;
    }

    int top() {

        if(topindex < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[topindex];
    }

    bool isEmpty() {
        return topindex == -1; //returns true if stack is empty
    }
};

int main(){
    
    Stack s;

    s.pushval(10);
    s.pushval(20);
    s.pushval(30);

    cout << "Top element = " <<s.top() << endl;

    //printing the stack
    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout<<endl;

    cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

    cout<<endl;
    return 0;
}