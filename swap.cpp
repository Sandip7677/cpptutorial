#include<iostream>
using namespace std;

void swap(int & a,int & b);

int main()
{
    int x,y;
    cout<<"input values of x and y"<<endl;
    cin>>x>>y;
    cout<<"values of x and y before swaping is "<<x<<" and "<<y<<endl;
    swap(x,y);
    cout<<"values of x and y after swaping is "<<x<<" and "<<y<<endl;
    return 0;
}
void swap(int & a,int & b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}