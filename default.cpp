#include<iostream>
using namespace std;
int substract(int a,int b=0)
{
    signed int c;
    c=a-b;
    return c;
}
int main()
{
    int a,b;
    cout<<"input two numbers";
    cin>>a>>b;
    // cout<<"diffrence between "<<a<<"and"<<b<<"is"<<substract(a)<<endl;
    cout<<"diffrence between  "<<a<<" and "<<b<<" is "<<substract(a,b)<<endl;
    return 0;
}