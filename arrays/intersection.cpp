// WAF to print intersection of 2 arrays
#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    for(int i = 0; i < size1; i ++){
        for(int j = 0; j < size2; j ++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-1;
                break;
            }
        }
    }
    cout<<endl;
}

int main(){
    int arr1[]={7, 6, 1, 8, 9, 2, 0, 15, 25};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={4, 2, 7, 8, 1, 2, 5};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<<"\n Printing the intersection of the 2 arrays: "<<endl;
    intersection(arr1, size1, arr2, size2);
    
    return 0;
}