#include<iostream>
using namespace std;
int binary_search(int arr[],int n , int x){
    int low = 0;
    int high = n-1 ; 
    int mid = (high + low)/2 ;

    for(int i=0;i<n;i++){
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            high = mid - 1 ; 
        }
        else{
            low = low + 1;
        }
    }return -1;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is - ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int element;
    cout<<"Enter the element you want to search - ";
    cin>>element;

    cout<<"\n";
    
    int k = binary_search(arr ,n , element);

    if(k == -1){
        cout<<"Key not found !!! "<<endl;
    }else{
        cout<<"Key found in "<<k+1<<" position "<<endl;
    }
    
    return 0;
}