// Return pair in a sorted array with target sum
#include<iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> &nums, int target){
    vector <int> ans;
    int n = nums.size();

    int i = 0;
    int j = n-1;
    
    while(i < j){
        if(nums[i]+nums[j] > target){
            j--;
        }
        else if (nums[i] + nums[j] < target){
            i++;
        }
        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return ans;
}

int main(){
    
    vector <int> nums = {2, 7, 11, 15};
    int target = 9;
    vector <int> vec;
    vector <int> ans = pairSum(nums, target);

    if(!(ans.empty())){
        cout<<"\n The pair with target sum 9 = "<<ans[0]<<" + "<<ans[1]<<endl;
    }
    else{
        cout<<"\n Runtime error!"<<endl;
    }
    return 0;
}