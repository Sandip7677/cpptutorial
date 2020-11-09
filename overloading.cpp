#include<iostream>
using namespace std;
inline float vol(int a)
{
    return a*a*a;
}
inline float vol(int l,int b,int c)
{
   return l*b*c; 
}
inline float vol(int r,int h)
{
    return (3.14*r*r*h);
}
int main()
{
    int a,l,b,h,r,c;
    cout<<"input side of cube "<<endl;
    cin>>a;
    cout<<"input dimensions of cubiod"<<endl;
    cin>>l>>b>>c;
    cout<<"input radius and height of cylinder"<<endl;
    cin>>r>>h;
    cout<<"volume of cube is "<<vol(a)<<endl;
    cout<<"volume of cubiod is "<<vol(l,b,c)<<endl;
    cout<<"volume of cylinder is "<<vol(r,h)<<endl;
    return 0;
}