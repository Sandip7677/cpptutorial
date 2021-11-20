#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

bool mycamp(pair<int,int> p1,pair<int,int> p2){
    double d1=(double) p1.second/p1.first;
    double d2=(double) p2.second/p2.first;
    return d1>d2;
}

int main(){
    vector<pair<int,int>> v={{10,100},{20,150},{20,360},{25,200}};
    sort(v.begin(),v.end(),mycamp);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    int k=50;
    double ans=0;
    for(auto it=v.begin();it!=v.end();it++){
        if(k>it->first){
            ans+=it->second;
            k=k-it->first;
        }
        else{
            ans+=(double)(it->second/it->first)*k;
            break;
        }
    }

    cout<<"ans is "<<ans;
    return 0;
}