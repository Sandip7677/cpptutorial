#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x):a(x){
        cout<<"constructor of A class is called "<<endl;
        cout<<a;
    }
};

int main()
{
    A *ptr=new A(4);

    return 0;
}