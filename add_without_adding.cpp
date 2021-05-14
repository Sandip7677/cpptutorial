#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<" input two numbers ";
    cin>>x>>y;
    while (y!=0)
    {
        int carry=x&y;
        x=x^y;
        y=carry<<1;
        // y=(x&y)<<1;
    }
    cout<<"sum of given numbers is "<<x<<endl;
    return 0;
}