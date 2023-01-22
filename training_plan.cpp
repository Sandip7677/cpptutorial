#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

typedef long double ld;
typedef long long int ll;

int main(){
    int n;
    cout<<"input size of array"<<endl;
    cin>>n;

    vector<pair<int,int>> v(n);

    for(auto &[i,_]:v) cin>>i;
    for(auto &[_,i]:v) cin>>i;

    vector<vector<int>> vvi;
    for(auto [x,y]:v){
        vvi[y].push_back(x);
    }

    ld ans=0.0;
    ll sum=0;

    priority_queue<int> pq;

    for(int i=0;i<n;i++){
        for(auto x:vvi[i]){
            pq.push(x);
        }
        if(pq.empty()==true)
            break;
        sum+=pq.top();
        pq.pop();
        ans=max(ans,sum/ld(i+1));
    }

    cout<<ans<<endl;

    return  0;
}