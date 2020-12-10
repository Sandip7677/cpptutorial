#include<iostream>
using namespace std;
class complex
{
    int a,b;
    friend void sumcomplex(complex o1,complex o2);
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
void sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    o3.printnumber();
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();
    c2.setnumber(6,9);
    c2.printnumber();
    sumcomplex(c1,c2);
    return 0;
}