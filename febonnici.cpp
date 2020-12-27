#include<iostream>
using namespace std;

void feb(int x)
{
    int t1=0;
    int t2=1;
    int next;
    cout<<"febonnici series up to "<<x<<"th term"<<endl;
    for (int i = 0; i < x; i++)
    {
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}
int main()
{
    int n;
    cout<<"input an integer up to which you want to print febinnici series"<<endl;
    cin>>n;
    feb(n);
    return 0;
}