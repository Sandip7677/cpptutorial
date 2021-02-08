#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> v {56,34,89,9,90};
    for(auto & c:v)
        c=c+5;
    for(const auto & x :v)
        cout<<x<<" ";
    return 0;
}