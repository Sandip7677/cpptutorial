#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int i):data1(i){
        cout<<"base1 constructor called "<<endl;
    }
    void printdata1(void){
        cout<<"the value of data 1 is: "<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i):data2(i){
        cout<<"base2 constructor called "<<endl;
    }
    void printdata2(void){
        cout<<"the value of data 2 is: "<<data2<<endl;
    }
};

class derived : public base1,public base2{
    int d1,d2;
    public:
    derived (int a,int b,int c,int d):base1(a),base2(b),d1(c),d2(d){
        cout<<"derived class cinstructor called "<<endl;
    }
    void printderived(void){
        cout<<"value of d1 is:"<<d1<<endl;
        cout<<"value of d2 is:"<<d2<<endl;
    }
};
int main()
{
    derived ak(4,56,54,0);
    ak.printdata1();
    ak.printdata2();
    ak.printderived();
    return 0;
}