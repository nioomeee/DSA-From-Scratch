// WAF to print all the unique elements of the array
#include<iostream>
using namespace std;

void Unique(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i ++){
        count = 0;

        for(int j = 0; j < size; j ++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }


    for(int i = 0; i < size; i ++){
        
    }
}

int main(){
    int arr[]={7, 6, 1, 8, 9, 2, 0, 6, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"\n Printing the unique elements of the array: "<<endl;

    Unique(arr, size);
    cout<<endl;
    return 0;
}