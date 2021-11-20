#include<iostream>
using namespace std;

int main(){
    int arr[]={-4,0,1,-5,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int i=0,j=0,k;
    for(;i<n;i++){
        if(arr[i]>=0 && arr[j]>=0)
            j++;
        else{
            if(arr[i+1]>=0){
                arr[j]=arr[i+1];
                arr[i+1]=-1;
                j++;
            }
            else
                continue;
        }
    }

    j==i?k=j:k=j-1;

    int x=arr[0];
    for(int p=0;p<=k;p++){
        if(i+x != arr[i]){
            cout<<"missing element is "<<i<<endl;
            return 0;
        }
    }

    cout<<" missing element is "<<k+1;
    return 0;
}