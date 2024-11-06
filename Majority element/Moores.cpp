// find the element that occurs the majority(> n/2) times in an array 
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majority(vector <int>& nums){
    int freq = 0;
    int n = nums.size();

    int ans = nums[0];

    for(int i = 1; i < n; i ++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans = nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    
    vector <int> vec = {1, 2, 2, 1, 1};
    cout<<"\n The element occuring majority times in the array = "<<majority(vec);
    return 0;
}