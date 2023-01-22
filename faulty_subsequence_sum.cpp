#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> arr,vector<vector<int>> &v,vector<int> output,int i){
    if(i>=arr.size()){
        v.push_back(output);
        return;
    }
    
    subset(arr,v,output,i+1);
    int a=arr[i];
    output.push_back(a);
    subset(arr,v,output,i+1);
}

int main(){
    vector<int> arr{3,1,2,5};
    vector<vector<int>> v;
    vector<int> output;
    sort(arr.begin(),arr.end());
    subset(arr,v,output,0);
    
    
    int sum=0;
    for(auto x:v){
        if(x.empty()){
            sum+=1;
        }
        else{
            if(x[0]!=1)
                sum+=1;
            else{
                for(int i=1;i<x.size();i++){
                    if(x[i]!=x[i-1] && x[i]!=x[i-1]+1){
                        sum+=(x[i-1]+1);
                        break;
                    }
                    else if(i==x.size()-1 && (x[i]==x[i-1] || x[i]==x[i-1]+1))
                        sum+=(x[i]+1);
                }
                cout<<sum<<endl;
            }
        }
    }
    
    cout<<sum<<endl;
    return 0;
}