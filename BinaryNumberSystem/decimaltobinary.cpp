#include<iostream>
using namespace std;

class Binary{
public:
    int convert(int n){
        int rem = 0;
        int pow = 1;
        int ans = 0;
        while(n!=0){
            rem = n % 2;
            n = n / 2;
            ans += (rem*pow);
            pow *= 10;
        }
        return ans;
    }
};

int main(){
    int dec;
    cout<<"\n Enter a number: ";
    cin>>dec;
    Binary bin;
    
    cout<<"\n The decimal number "<<dec<<" in binary = "<<bin.convert(dec);
    return 0;
}