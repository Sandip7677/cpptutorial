#include<iostream>
using namespace std;
class c2;
class c1
{
    int v1;
    friend void swap(c1 &,c2 &);
    public :
    void getdata()
    {
        cout<<"input a number"<<endl;
        cin>>v1;
    }
    void printdata()
    {
        cout<<v1<<endl;
    }
};
class c2
{
    int v2;
    friend void swap(c1 &,c2 &);
    public:
    void getdata()
    {
        cout<<"input a number"<<endl;
        cin>>v2;
    }
    void printdata()
    {
        cout<<v2<<endl;
    }

};
void swap(c1 & x,c2 & y)
{
    int temp=x.v1;
    x.v1=y.v2;
    y.v2=temp;
}
int main()
{
    c1 x;
    c2 y;
    x.getdata();
    y.getdata();
    cout<<endl;
    cout<<"value in v1 before swaping is ";
    x.printdata();
    cout<<"value in v2 before swaping is ";
    y.printdata();
    swap(x,y);
    cout<<endl;
    cout<<"value in v1 after swaping is ";
    x.printdata();
    cout<<"value in v2 after swaping is ";
    y.printdata();
    return 0;
}