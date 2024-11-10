#include<iostream>
#include<vector>
using namespace std;

int Solution(vector<int> &height){
    int maxWater = 0;
    int w = 0, h = 0, area = 1;

    int lp = 0;
    int rp = height.size()-1;

    while(lp < rp){
        w = rp - lp;
        h = min(height[lp], height[rp]);
        area = w*h;

        maxWater = max(maxWater, area);

        height[lp]<height[rp]?lp++:rp--;
    }

    return maxWater;
}

int main(){
    
    vector <int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<"\n The maximum water that can be held in the container = "<<Solution(height)<<endl;

    return 0;
}