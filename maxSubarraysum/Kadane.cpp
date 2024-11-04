#include<iostream>
#include <vector>
using namespace std;
class Solution{
public: 
    int Sum(vector <int> &vect){
        int currSum = 0;
        int maxSum = 0;

        for(int val : vect){
            currSum += val;
            maxSum = max(maxSum, currSum);
            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }
};
int main(){
    
    vector <int> vec = {3, -4, 5, 4, -1, 7, -8};
    Solution sol;
    cout<<"\n Maximum subarray sum = "<<sol.Sum(vec)<<endl;
    return 0;
}