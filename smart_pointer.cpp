#include<iostream>
using namespace std;

template <class t>
class sp{
    t*ptr;
    public:
    sp(t* p=NULL){
        ptr=p;
    }
    ~sp(){
        delete ptr;
    }
    t * operator->(){
        return ptr;
    }
    t & operator*(){
        return *ptr;
    }
};

class test{
    int x,y;
    public:
    test(int a=0,int b=0){
        x=a;
        y=b;
    }
    ~test(){
        cout<<"destructor called \n";
    }
    void show(){
        cout<<"vlaues are :"<<x<<" and "<<y<<endl;
    }
};

int main(){
    sp<test> p(new test (56,76));
    p ->show();
    return 0;
}