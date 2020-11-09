#include<iostream>
using namespace std;

int main()
{
    int l;
    cout<<"length of pyramid you want"<<endl;
    cin>>l;
    int c=1;
    cout<<"pyramid is"<<endl;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }
    
    return 0;
}