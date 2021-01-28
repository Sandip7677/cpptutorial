#include<iostream>
using namespace std;
template <class t>
class demo{
    t a;
    t b;
    public:
    demo(){
        cout<<"inter value of a and b ";
        cin>>a>>b;
        cout<<"sum of a and b is "<<a+b<<endl;
    }
};
int main()
{
    demo<int>obj;
    demo<float>obj2;
    return 0;
}