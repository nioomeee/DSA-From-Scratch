#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {1, 2, 3}; //like arrays
    vector<int> vec2(3, 0); //creates a vector of size 3 with all elements as 0
    vector<int> vec3; //creates a vector of size 0
    

    cout<<vec1[0]<<endl;
    for(int i : vec2){
        cout<<i<<endl;
    }

    return 0;
}