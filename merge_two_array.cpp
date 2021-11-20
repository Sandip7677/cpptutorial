#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,2,5,7,9};
    int arr2[]={3,5,10,14};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    int arr[n+m];
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j])
            arr[k++]=arr1[i++];
        if(arr1[i]>=arr2[j])
            arr[k++]=arr2[j++];
    }
     
    while(i<n)
        arr[k++]=arr1[i++];
    while(j<m)
        arr[k++]=arr2[j++];

    for(int p=0;p<m+n;p++)
        cout<<arr[p]<<" ";
    return 0;
}