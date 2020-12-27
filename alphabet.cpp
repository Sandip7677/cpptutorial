#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"inter a charecter "<<endl;
    cin>>c;
    int a=int(c);
    // cout<<a<<endl;
    if ((65<a<91) || (97 <a<123))
    {
        cout<<"given chacter is an alphabet "<<endl;
    }
    else
    {
        cout<<"given chacter is not an alphabet "<<endl;
    }
    return 0;
}