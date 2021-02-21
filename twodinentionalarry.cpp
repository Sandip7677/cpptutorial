#include<iostream>
#include"smart_pointer.h"
using namespace std;
using namespace smart_pointer;

class marks{
    int maths,science;
    public:
    marks(int a=0,int b=0){
        maths=a;
        science=b;
    }
    void show(){
        cout<<"marks got in both two subjects are :"<<maths<<" and "<<science<<endl;
    }
};

int main(){
    sp <marks> p(new marks(87,98));
    p->show();
    return 0;
}
