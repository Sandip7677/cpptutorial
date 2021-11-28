#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> v={2,56,87,1,9};
    auto it=v.erase(v.begin(),v.begin()+2);
    cout<<*(it);
    cout<<endl;
    for(auto x:v)
        cout<<x<<" ";
    return 0;
}