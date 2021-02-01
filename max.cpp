#include<iostream>
using namespace std;

int main(){
    int c,x,a;
    cin>>c>>x>>a;
    cout<<max(a,max(c,x));
    return 0;
}