#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x,y;
    public :
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    friend void distance(point,point);
};
void distance(point o1, point o2)
{
    int a=o2.x-o1.x;
    int b=o2.y-o1.y;
    cout<<"distance between given points is "<<sqrt(pow(a,2)+pow(b,2))<<endl;
}
int main()
{
    point p1(5,4),p2(9,6);
    distance(p1,p2);
    return 0;
}