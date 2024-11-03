// WAF to swap min and max of an array
#include<iostream>
using namespace std;

void Swap(int arr[], int size){
    int minimum = arr[0];
    int minindx = 0;
    int maximum = arr[0];
    int maxindx = 0;
    for(int i = 0; i < size; i ++){
        if(arr[i]<minimum){
            minimum = arr[i];
            minindx = i;
        }
        if(arr[i]>maximum){
            maximum = arr[i];
            maxindx = i;
        }
    }
    cout<<"\n Minimum element = "<<minimum<<" at index = "<<minindx<<endl;
    cout<<"\n Maximum element = "<<maximum<<" at index = "<<maxindx<<endl;
    swap(arr[minindx], arr[maxindx]);
}

int main(){
    int arr[]={7, 6, 1, 8, 9, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    Swap(arr, size);
    cout<<"\n After swapping the minimum and maximum elements of the array: "<<endl;
    for(int i = 0; i < size; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}