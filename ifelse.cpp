#include<iostream>
using namespace std;

int main()
{
    int money;
    cout<<"inter the amount of money you have"<<endl;
    cin>>money;
    if(money<1000)
    {
        cout<<"we will go to small hotel"<<endl;
    }
    else if ((money>1000)&&(money<3000))
    {
        cout<<"you can go to normal hotel"<<endl;
    }
    else
    {
        cout<<"you can go to any hotel"<<endl;
    }
    
    return 0;
}