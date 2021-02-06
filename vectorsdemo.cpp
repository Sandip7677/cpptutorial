#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v;
    int n;
    for (int  i = 0; i<5; i++)
    {
        cin>>n;
        v.push_back(n);
    }
     for (int  i = 0; i<5; i++)
    {
        cin>>n;
        v.push_back(n);
    }
    
    // v.push_back(56);
    // v.push_back(54);
    // v.push_back(56766);
    // v.push_back(67);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}