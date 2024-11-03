#include<iostream>
using namespace std;

int main(){
    
    int arr[]={3, 6, 1, 5, 8 , 2, 0, -8, 3, -25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];
    int idx = 0;

    for(int i = 0; i < size; i ++){
        smallest = min(arr[i], smallest);
    }

    // Returing index of the smallest element
    for(int i = 0; i < size; i ++){
        if(smallest = arr[i]){
            idx = i;
        }
    }

    cout<<"\n Smallest number = "<<smallest<<endl;
    cout<<"\n Index of the smallest element = "<<idx<<endl;

    return 0;
}