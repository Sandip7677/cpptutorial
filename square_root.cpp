#include<iostream>
using namespace std;

int binary_search(int n){
    int l=1;
    int r=n;
    int ans;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid*mid==n) return mid;
        if(mid*mid>n)
            r=mid-1;
        if(mid*mid<n){
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"input intrger "<<endl;
    cin>>n;
    cout<<"square root is: "<<binary_search(n);
    return 0;
}