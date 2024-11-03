    #include<iostream>
    using namespace std;

    void reverse(int arr[], int size){
        int start = 0, end = size-1;

        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void print(int arr[], int size){
        for(int i =0; i < size; i ++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int main(){
        int oddarr[]={4, 2, 7, 8, 1, 2, 5};
        int size2 = sizeof(oddarr)/sizeof(oddarr[0]);
        reverse(oddarr, size2);

        cout<<"\n Printing the reverse of even array: "<<endl;
        print(oddarr, size2);

        int evenarr[]={7, 4, 1, 2, 5, 8};
        int size1 = sizeof(evenarr)/sizeof(evenarr[0]);
        reverse(evenarr, size1);

        cout<<"\n Printing the reverse of odd array: "<<endl;
        print(evenarr, size1);

        return 0;
    }