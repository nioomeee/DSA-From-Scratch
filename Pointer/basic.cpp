#include<iostream>
using namespace std;

int main(){
    
    int a = 10;
    cout<<"\n Printing the address using address of operator  = "<< &a <<endl;

    int* ptr = &a;
    cout<<"\n Printing address using * and pointer variable = "<<ptr<<endl;

    int** ptr2 = &ptr;
    cout<<"\n Printing address of pointer using pointer to pointer variable = "<<ptr2<<endl;

    cout<<"\n The value stored at pointer 1 "<<ptr<<" using dereferencing pointer = "<<*ptr<<endl;
    cout<<"\n The value stored at pointer 2 "<<ptr2<<" using dereferencing pointer = "<<**ptr2<<endl;
    return 0;
}