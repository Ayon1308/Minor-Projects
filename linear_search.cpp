#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            return i;
    }return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array - ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array - "<<endl;
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The elements of the array are - ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int x;
    cout<<"Enter the number you want to search - ";
    cin>>x;

    linear_search(arr,n,x);

    int k = linear_search(arr , n , x);

    if(k==-1){
        cout<<"ELEMENT NOT FOUND "<<endl;
    }
    cout<<"Element found in "<<k+1<<" position"<<endl;
}
