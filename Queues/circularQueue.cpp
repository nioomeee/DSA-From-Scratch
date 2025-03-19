// creating circular queue with help of array
#include<iostream>
using namespace std;

class circularQueue {
    int* arr;
    int currSize, cap;
    int f, r;

public:
    circularQueue(int size) {
        cap = size;
        arr = new int[size];
        f = 0;
        r = -1;
        currSize = 0;
    }

    void push(int val) {
        if(currSize == cap) {
            cout << "The circular Queue is FULL" <<endl;
            return;
        }
        
        r = (r + 1) % cap;
        arr[r] = val;
        currSize++;
    }

    void pop() {
        if(isEmpty()) {
            cout << "Circular Queue is Empty" << endl;
            return;
        }

        f = (f+1) % cap;
        currSize--;
    }

    int front() {
        if(isEmpty()) {
            cout << "The circular queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    bool isEmpty() {
        return currSize == 0;
    }
};

int main() {
    
    circularQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);

    while(!cq.isEmpty()) {
        cout << cq.front() << " ";
        cq.pop();
    }
    
    cout<<endl;
    return 0;
}