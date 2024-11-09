#include<iostream>
#include <vector>
using namespace std;

void Solution(vector <int> arr){
    int bestbuy = arr[0];
    int size = arr.size();
    int maxprofit = 0;

    for(int i = 1; i < size; i ++){
        if(arr[i] > bestbuy){
            maxprofit = max(maxprofit, arr[i]-bestbuy);
        }
        bestbuy = min(bestbuy, arr[i]);
    }

    cout<<"\n the best day to buy the stocks = "<<bestbuy<<endl;
    cout<<"\n the maximum profit of the stocks = "<<maxprofit<<endl;
}

int main(){
    
    vector <int> prices={7, 1, 5, 3, 6, 4};
    Solution(prices);
    return 0;
}