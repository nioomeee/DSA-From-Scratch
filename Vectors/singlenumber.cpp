//suppose you're given a array and in there every number appears twice except for 1, find that number
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int single(vector<int> &nums){
        int ans = 0;
        for(int val : nums){
            ans ^= val;
        }
        return ans;
    }
};

int main(){
    vector<int> vec = {4, 1, 2, 1, 2};

    Solution sol;
    cout<<"\n The single number from the array = "<<sol.single(vec)<<endl;
    
    return 0;
}