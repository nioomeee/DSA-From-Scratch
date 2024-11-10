#include<iostream>
#include<vector>
using namespace std;

vector <int> Solution(vector <int>& vec){
    vector<int> ans;
    int prod = 1;

    for(int i = 0; i < vec.size(); i ++){
        prod = 1;
        for(int j = 0; j < vec.size(); j ++){
            if(vec[i]!= vec[j]){
                prod *= vec[j];
            }
        }
        ans.push_back(prod);
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