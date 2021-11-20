#include<iostream>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int participent(int arr[],int l,int r){
    int pi=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pi){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

    swap(&arr[i+1],&arr[r]);
    return i+1;
}

void quick_sort(int arr[],int l,int r){
    if(l<r){
        int p=participent(arr,l,r);

        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,r);
    }
}

int main(){
    int arr[]={3,6,1,89,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr,0,n-1);

    cout<<" array after sorting is "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}