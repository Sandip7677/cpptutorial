#include<iostream>
using std::cout;
using std::endl;

class base{
    int a,b;
    public:
    base(){}
    base(int a1,int b1):a(a1),b(b1){
        cout<<"value in a and b in base class is:"<<a<<"and"<<b<<endl;
    }
    virtual void cal(){
        cout<<"value of a+b is: "<<a+b<<endl;
    }
    void print(){
        cout<<"print function of base class "<<endl;
    }
};

class derived:public base{
    int a,b;
    public:
    derived(int a1,int b1,int c,int d):a(a1),b(b1),base(c,d){
        cout<<"value in a and b in derived class is:"<<a<<"and"<<b<<endl;
    }
    void cal(){
        cout<<"value of a*b is:"<<a*b<<endl;
    }
    // void print(){
    //     cout<<"print function of derived class "<<endl;
    // }
};

int main(){
    base *ptrb;
    derived objd(54,51,764,12);
    ptrb=&objd;
    ptrb->cal();
    ptrb->print();
    cout<<endl<<endl;
    derived *ptr=new derived(564,6587,9,78);
    ptr->base::cal();
    ptr->cal();
    ptr->print();
    return 0;
}