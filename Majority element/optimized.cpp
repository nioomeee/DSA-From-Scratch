// find the element that occurs the majority(> n/2) times in an array 
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int majority(vector <int>& nums){
    int freq = 1;
    int n = nums.size();

    sort(nums.begin(), nums.end());
    int ans = nums[0];

    for(int i = 1; i < n; i ++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
    
    vector <int> vec = {1, 2, 2, 1, 1};
    cout<<"\n The element occuring majority times in the array = "<<majority(vec);
    return 0;
}