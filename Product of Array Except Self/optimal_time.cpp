#include<iostream>
#include<vector>
using namespace std;

vector <int> Solution(vector <int>& vec){
    int n = vec.size();
    vector<int> pref(n, 1);
    vector<int> suff(n, 1);
    vector<int> ans(n, 1);
    int prod = 1;

    for(int i = 1; i < n; i ++){
        pref[i] = pref[i-1]*vec[i-1];
    }

    for(int i = n-2; i >= 0; i --){
        suff[i] = suff[i+1] * vec[i+1];
    }

    for(int i = 0; i < n; i ++){
        ans[i] = pref[i]*suff[i];
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