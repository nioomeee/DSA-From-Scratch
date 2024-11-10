#include<iostream>
#include<vector>
using namespace std;

int Solution(vector <int>& arr, int target){ //iterative code
    int start = 0, mid;
    int n = arr.size();
    int end = n-1;

    while(start<=end){
        mid = (start+end)/2;

        if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;

}

int main(){
    // array should always be sorted for binary search
    vector <int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target1 = 12;
    
    cout<<"\n The index of the target element 12 = "<<Solution(arr1, target1)<<endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int target2 = 0;

    cout<<"\n The index of the target element 0 = "<<Solution(arr2, target2)<<endl;
    
    return 0;
}