// Return pair in a sorted array with target sum
#include<iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> nums = {2, 7, 11, 15};
    int target = 9;
    vector <int> vec;
    int n = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n ; j ++){
            if(nums[i]+nums[j] == target){
                vec.push_back(nums[i]);
                vec.push_back(nums[j]);
            } 
        }
    }

    cout<<"\n The pair with target sum 9 = "<<vec[0]<<" + "<<vec[1]<<endl;
    return 0;
}