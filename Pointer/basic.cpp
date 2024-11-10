#include<iostream>
using namespace std;

int main(){
    
    int a = 10;
    cout<<"\n Printing the address using address of operator  = "<< &a <<endl;

    int* ptr = &a;
    cout<<"\n Printing address using * and pointer variable = "<<ptr<<endl;
    return 0;
}