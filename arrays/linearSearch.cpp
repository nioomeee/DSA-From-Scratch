#include<iostream>
using namespace std;

int search(int arr[],int size,int target){
    for(int i=0; i < size; i ++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[]={0, 5, 8, 7, 6, 2};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    int idx = search(arr, size, target);
    cout<<"\n The index of target(8) = "<<idx<<endl;
    return 0;
}