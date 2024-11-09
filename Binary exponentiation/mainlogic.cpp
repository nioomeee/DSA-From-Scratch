#include<iostream>
using namespace std;

double Solution(double x, int n){
    long binform = n;
    double ans = 1;

    if(n < 0){
        x = 1/x;
        binform = -binform;
    }
    
    while(binform > 0){
        if(binform % 2 == 1){
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }

    return ans;
}

int main(){

    int n;
    double x;
    cout<<"\n Enter a number: ";
    cin>>x;

    cout<<"\n Enter it's desired power: ";
    cin>>n;

    cout<<"\n "<<x<<"^"<<n<<" = "<<Solution(x, n);
    return 0;
}