#include<iostream>
using namespace std;

void merge_array(int arr1[],int arr2[],int n1,int n2,int out[]){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            out[k++]=arr1[i++];
        }
        else{
            out[k++]=arr2[j++];
        }
    }
    
    while(i<n1){
        out[k++]=arr1[i++];
    }
    
    while(j<n2){
        out[k++]=arr2[j++];
    }
}

void merge_k_array(int arr[][4],int i,int j,int out[]){
    if(i==j){
        for(int p=0;p<4;p++){
            out[p]=arr[i][p];
            return;
        }
    }
    
    if(j-i==1){
        merge_array(arr[i],arr[j],4,4,out);
        return;
    }
    
    int mid=(i+j)/2;
    int n=4;
    
    int out1[n*(mid-i+1)],out2[n*(j-mid)];
    
    merge_k_array(arr,i,mid,out1);
    merge_k_array(arr,mid+1,j,out2);
    
    merge_array(out1,out2,n*(mid-i+1),n*(j-mid),out);
}

int main(){
    int k;
    cout<<"input no of array"<<endl;
    cin>>k;
    int arr[k][4];
    cout<<"input element in array"<<endl;
    for(int i=0;i<k;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
     
    int out[k*4];
    merge_k_array(arr,0,k-1,out);
     
    for(int i=0;i<k*4;i++){
        cout<<out[i]<<" ";
    }
    
    return 0;
}