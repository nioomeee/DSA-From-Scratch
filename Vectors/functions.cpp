#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec1;
   
    cout<<"\n Size of vector before push back = "<<vec1.size()<<endl;
    vec1.push_back(25);
    vec1.push_back(35);
    vec1.push_back(85);
    vec1.push_back(65); //push back 
    cout<<"\n Size of vector after push back = "<<vec1.size()<<endl;

    // pop back
    vec1.pop_back();
    cout<<"\n Size of vector after pop back = "<<vec1.size()<<endl;

    // front
    cout<<"\n Front (1st value) of vector = "<<vec1.front();

    // back
    cout<<"\n Back (Last value) of vector = "<<vec1.back();

    // at
    cout<<"\n Vector at value 1 = "<<vec1.at(1);

    for(int val : vec1){
        cout<<"\n " << val;
    }

    return 0;
}