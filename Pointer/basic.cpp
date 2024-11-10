#include<iostream>
using namespace std;

int main(){
    
    int a = 10;
    cout<<"\n Printing the address using address of operator  = "<< &a <<endl;

    int* ptr = &a;
    cout<<"\n Printing address using * and pointer variable = "<<ptr<<endl;

    cout<<&ptr;

    int** ptr2 = &ptr;
    cout<<"\n Printing address of pointer using pointer to pointer variable = "<<ptr2<<endl;


    return 0;
}