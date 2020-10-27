#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"input any three integers"<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<"is gratest"<<endl;       
        }
        else
        {
            cout<<c<<"is gratest"<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<b<<"is gratest"<<endl;
        }
        else
        {
            cout<<c<<"is gratest"<<endl;
        }
        
    }
    
    return 0;
}