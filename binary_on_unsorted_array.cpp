#include<iostream>
#include<algorithm>
using namespace std;

int search(int arr[],int l,int r,int key){
    if(l>r)
        return -1;
    int mid=l+(r-l)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[l]<=arr[mid]){
        if(arr[l]<=key && arr[mid]>=key){
            return search(arr,l,mid-1,key);
        }
        return search(arr,mid+1,r,key);
    }
    if(arr[mid]<=key && arr[r]>=key)
        return search(arr,mid+1,r,key);
    return search(arr,l,mid-1,key);
}

int main(){
    int arr[]={1,3,5,7,8,13,15,78,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotate(arr,arr+6,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    int i=search(arr,0,n-1,90);
    cout<<endl;
    cout<<"index is "<<i;
    return 0;
}