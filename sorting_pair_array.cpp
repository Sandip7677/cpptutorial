#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a[]={7,2,9,3,5};
    int b[]={'h','e','u','a','w'};
    int n=sizeof(a)/sizeof(a[0]);

    vector<pair<int,char>> v;

    for(int i=0;i<n;i++)
        v.push_back({a[i],b[i]});
    
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout<<v[i].second<<" ";
    return 0;
}