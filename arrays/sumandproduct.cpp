// WAF to calculate sum and product of all element in an array
#include<iostream>
using namespace std;

int Sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i ++){
        sum += arr[i];
    }
    return sum;
}

int Prod(int arr[], int size){
    int prod = 1;
    for(int i = 0; i < size; i ++){
        prod *= arr[i];
    }
    return prod;
}

int main(){
    int arr[]={7, 6, 1, 8, 9, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = Sum(arr, size);
    int prod = Prod(arr, size);

    cout<<"\n The addition of all the elemnts in the array = "<<sum<<endl;
    cout<<"\n The product of all the elemnts in the array = "<<prod<<endl;
    return 0;
}