#include<iostream>

using namespace std;
int c=56;
int main()
{
    int a,b,c;
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is:"<<c<<endl;
    cout<<"the value of global c is :"<<::c <<endl;
    return 0;
}