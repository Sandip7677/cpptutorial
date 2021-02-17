#include<iostream>
using namespace std;

class vec{
    int real;
    int image;
    public:
    vec(){}
    vec(int r,int i){
        real=r;
        image=i;
    }
    void show(){
        cout<<"sum of two imaginary number is :"<<real<<"+"<<image<<endl;
    }

    vec operator +(vec m){
        vec temp;
        temp.real=this->real + m.real;
        temp.image=this->image + m.image;
        return temp;
    }

};

int main(){
    vec m1(56,45),m2(34,78);
    vec m3=m1+m2;
    m3.show();
    return 0;
}