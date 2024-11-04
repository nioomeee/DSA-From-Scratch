#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec1;
   
    cout<<"\n Size of vector before push back = "<<vec1.size()<<endl;
    vec1.push_back(25);
    vec1.push_back(35);
    vec1.push_back(65); //push back 
    cout<<"\n Size of vector after push back = "<<vec1.size()<<endl;

    // pop back
    vec1.pop_back();
    cout<<"\n Size of vector after pop back = "<<vec1.size()<<endl;


    for(int val : vec1){
        cout<<"\n " << val;
    }

    return 0;
}