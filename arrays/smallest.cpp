#include<iostream>
using namespace std;

int main(){
    
    int arr[]={3, 6, 1, 5, 8 , 2, 0, -8, 3, -25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];

    for(int i = 0; i < size; i ++){
        smallest = min(arr[i], smallest);
    }

    cout<<"\n Smallest number = "<<smallest<<endl;

    return 0;
}