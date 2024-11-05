// Return pair in a sorted array with target sum
#include<iostream>
#include <vector>
using namespace std;

int main(){
    
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    vector <int> vec;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n ; j ++){
            if(arr[i]+arr[j] == target){
                vec.push_back(arr[i]);
                vec.push_back(arr[j]);
            } 
        }
    }

    cout<<"\n The pair with target sum 9 = "<<vec[0]<<" + "<<vec[1]<<endl;
    return 0;
}