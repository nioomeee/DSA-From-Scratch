#include<iostream>
#include<vector>
using namespace std;

vector <int> Solution(vector <int>& vec){
    int n = vec.size();
    // vector<int> pref(n, 1);
    // vector<int> suff(n, 1);
    vector<int> ans(n, 1);
    // int prod = 1;
    int suffix = 1; 

    //prefix => ans
    for(int i = 1; i < n; i ++){
        ans[i] = ans[i-1]*vec[i-1];
    }

    //suffix => ans
    for(int i = n-2; i >= 0; i --){
        suffix *= vec[i+1];
        ans[i] *= suffix;
    }
    return ans;
}

int main(){
    
    vector <int> vec = {1, 2, 3, 4};
    vector <int> ans = Solution(vec);

    cout<<"\n The array after product = "<<endl;
    cout<<" [ ";
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}