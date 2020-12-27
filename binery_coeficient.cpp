#include<iostream>
using namespace std;

int fac(int x);

int main()
{
    int n,r;
    cout<<"input the value of n and r"<<endl;
    float c=fac(n)/(fac(r)*fac(n-r));
    cout<<"the value of nCr is "<<c<<endl;
    return 0;
}

int fac(int x)
{
    int facn=1;
    for (int i = x; i <=1; i--)
    {
        facn*=i;
    }
    return facn;
}