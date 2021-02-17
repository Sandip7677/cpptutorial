#include<iostream>
using namespace std;

class demo{
    int x;
    public:
    demo(){}
    demo(int a){
        x=a;
    }
    void show(){
        cout<<" total marks after  two exams is :"<<x<<endl;
    }  
    int operator += (demo &m){
        x=x+m.x;
        return x;
    }
};
int main(){
    demo initial(0),maths(99),phy(97);
    initial += maths;
    initial += phy;
    initial.show();
    return 0;
}