#include<iostream>
using namespace std;

int main(){
    int arr[]={3, 6, 1, 5, 8 , 2, 0, -8, 3, -25};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];

    for(int i = 0; i < size; i ++){
        largest = max(arr[i], largest);
    }

    cout<<"\n Largest = "<<largest<<endl;
    return 0;
}