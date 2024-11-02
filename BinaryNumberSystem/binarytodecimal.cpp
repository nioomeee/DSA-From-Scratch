#include<iostream>
using namespace std;

class Decimal{
public:
    int convert(int n){
        int rem = 0;
        int pow = 1;
        int ans = 0;
        while(n>0){
            rem = n % 10;
            ans += (rem * pow);
            n = n / 10;
            pow *= 2;
        }
        return ans;
    }
};

int main(){
    int bin;
    cout<<"\n Enter a number: ";
    cin>>bin;
    Decimal dec;
    
    cout<<"\n The binary number: "<<bin<<" to decimal = "<<dec.convert(bin);
    return 0;
}