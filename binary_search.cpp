#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==x) return mid;
        if(arr[mid]>x) r=mid-1;
        if(arr[mid]<x) l=mid+1;
    }
    return 0;
}

int main(){
    int n;
    cout<<"input size of array "<<endl;
    cin>>n;
    int array[n];
    cout<<"input "<<n<<" element in array"<<endl;
    for(int i=0;i<n;i++)
        cin>>array[i];
    if( int i=binary_search(array,n,10)){
        cout<<"it is in array at "<<i<<" index"<<endl;
    }
    else
    {
        cout<<"this element is not in array"<<endl;
    }
    return 0;
}