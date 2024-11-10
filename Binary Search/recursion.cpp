#include<iostream>
#include<vector>
using namespace std;

int Solution(vector <int>& arr, int target, int start, int end){ 
    int mid;
    if(start<=end){
        mid = start + ((end - start)/2); 

        if(target > arr[mid]){
            return Solution(arr, target, mid+1, end);
        }else if(target < arr[mid]){
            return Solution(arr, target, start, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;

}

int main(){
    vector <int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target1 = 12;
    int start1 = 0;
    int end1 = arr1.size()-1;
    
    cout<<"\n The index of the target element 12 = "<<Solution(arr1, target1, start1, end1)<<endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 0;
    int start2 = 0;
    int end2 = arr2.size()-1;

    cout<<"\n The index of the target element 0 = "<<Solution(arr2, target2, start2, end2)<<endl;
    
    return 0;
}