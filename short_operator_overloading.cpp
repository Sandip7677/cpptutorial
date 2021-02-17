#include<iostream>
using namespace std;

class mark{
    int total;
    public:
    mark(){}
    mark(int m=0){
        total =m;
    }
    void show(){
        cout<<" total marks after  two exams is :"<<total<<endl;
    }

    void operator += (mark m){
        this->total=this->total + m.total;
    }
};

int main(){
    mark initial(0),maths(99),phy(97);
    initial += maths;
    initial += phy;
    initial.show();
    return 0;
}