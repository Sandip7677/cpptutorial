#include<iostream>
using namespace std;

int main()
{
    float a[5];
    cout<<"inter five float value "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    float *p=a;
    cout<<"values are"<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    return 0;
}