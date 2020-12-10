#include<iostream>
using namespace std;
class x
{
    int a,b;
    public:
    void sum(int v1,int v2)
    {
        a=v1 ;
        b=v2;
    }
    void sum(x o1,x o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void print (void)
    {
        cout<<"sum of a and b is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    x a1,a2,a3;
    a1.sum(1,2);
    a1.print();
    a2.sum(4,7);
    a2.print();
    a3.sum(a1,a2);
    a3.print();
    return 0;
}