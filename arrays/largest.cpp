#include<iostream>
using namespace std;

int main(){
    int arr[]={3, 6, 1, 5, 8 , 2, 0, -8, 3, -25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int idx= 0;

    for(int i = 0; i < size; i ++){
        if(arr[i] > largest){
            largest  = arr[i];
            idx = i;
        }

    }

    cout<<"\n Largest = "<<largest<<endl;
    cout<<"\n Index of maximum element = "<<idx;
    return 0;
}