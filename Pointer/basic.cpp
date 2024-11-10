#include<iostream>
using namespace std;

int main(){
    
    int a = 10;
    // Using address of variable(&)
    cout<<"\n Printing the address using address of operator  = "<< &a <<endl;

    // assigning values to pointer using address of variable
    int* ptr = &a;
    cout<<"\n Printing address using * and pointer variable = "<<ptr<<endl;

    // Using pointer to pointer variable 
    int** ptr2 = &ptr;
    cout<<"\n Printing address of pointer using pointer to pointer variable = "<<ptr2<<endl;

    // Using dereferencing operator
    cout<<"\n The value stored at pointer 1 "<<ptr<<" using dereferencing pointer = "<<*ptr<<endl;
    cout<<"\n The value stored at pointer 2 "<<ptr2<<" using dereferencing pointer = "<<**ptr2<<endl;

    // Null pointer
    int* ptr3 = NULL;
    cout<<"\n he value stored at ptr3 = "<<ptr3<<endl;
    return 0;
}