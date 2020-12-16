#include<iostream>
using namespace std;
class y;
class x
{
    int a;
    friend void add(x,y);
    public:
    void getdata(void);
};
class y
{
    int b;
    friend void add(x,y);
    public:
    void setdata(void);
};
void x :: getdata()
{
    cout<<"input an integer"<<endl;
    cin>>a;
}
void y::setdata()
{
    cout<<"input another integer"<<endl;
    cin>>b;
}
void add(x o1,y o2)
{
    cout<<"sum of a and b is "<<(o1.a+o2.b)<<endl;
}
int main()
{
    x o1;
    o1.getdata();
    
    y o2;
    o2.setdata();
    add(o1,o2);
    return 0;
}