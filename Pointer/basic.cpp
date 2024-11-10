#include<iostream>
using namespace std;

void changeA(int &b){ //& here is sign of alias which means a in main and b here refer to same memory address
    b = 20;
}

void printarr(int arr[], int n){
    cout<<"\n [ ";
    for(int i = 0; i < n; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}

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
    cout<<"\n The value stored at ptr3 = "<<ptr3<<endl;

    // pass by reference using alias
    cout<<"\n The value of a before pass by reference using alias = "<<a<<endl;

    changeA(a);
    cout<<"\n The value of a after pass by reference using alias = "<<a<<endl;

    // array pointers
    int arr[]={1, 2, 3, 4, 5};
    // the name of the array is itself a pointer pointing to the 0th index
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"\n Printing array using it's name pointer: "<<endl;
    printarr(arr, size);
    return 0;
}