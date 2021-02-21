#include<iostream>
using namespace std;

class Ptr{
    int *ptr;
    public:
    Ptr(){}
    Ptr(int *p){
        ptr=p;
    }
    ~Ptr(){
        delete ptr;
    }
    int * operator*(){
        return ptr;
    }
    void show(){
        cout<<*ptr<<endl;
    }
};

int main(){
    Ptr obj(new int);
    *(*obj)=45;
    obj.show();
    return 0;
}