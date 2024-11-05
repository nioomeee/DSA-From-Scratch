// find the element that occurs the majority(> n/2) times in an array 
#include<iostream>
#include<vector>
using namespace std;

int majority(vector <int>& nums){
    int freq = 0;
    int n = nums.size();
    for(int val : nums){
        freq = 0;
        for(int el : nums){
            if(val == el){
                freq++;
            }
        }

        if(freq > n/2){
            return val;
        }
    }
}

int main(){
    
    vector <int> vec = {1, 2, 2, 1, 1};
    cout<<"\n the lement occuring majority times in the array = "<<majority(vec);
    return 0;
}