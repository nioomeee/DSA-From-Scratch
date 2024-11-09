#include<iostream>
#include<vector>
using namespace std;

int Solution(vector<int> &height){
    int maxWater = 0;
    int w = 0, h = 0, area = 1;

    for(int i = 0; i < height.size(); i++){
        for(int j = i+1; j < height.size(); j ++){
            w = j - i;
            h = min(height[j], height[i]);
            area = h * w;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

int main(){
    
    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<"\n The maximum water that can be held in the container = "<<Solution(height)<<endl;

    return 0;
}