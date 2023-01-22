#include<bits/stdc++.h>
using namespace std;

void print(int n,int r,int c){
    if(r==0)return;
    if(c>r){
        cout<<endl;
        print(n,r-1,1);
        return;
    }
    cout<<"* ";
    print(n,r,c+1);
}

//  
int main(){
    int n;
    cin>>n;
    print(n,5,1);
    return 0;
}