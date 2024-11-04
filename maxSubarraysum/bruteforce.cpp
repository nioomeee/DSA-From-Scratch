#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[]={3, -4, 5, 4, -1, 7, -8};

    int maxSum = 0;

    for(int start = 0; start < n; start ++){
        int currsum = 0;
        for(int end = start; end < n; end ++){
            currsum += arr[end];
            maxSum = max(currsum, maxSum);
        }
    }

    cout<<"\n Maximum subarrya sum = "<<maxSum<<endl;
    return 0;
}