#include<iostream>
#include<memory>
using namespace std;

class student{
    string name;
    int *id;
    string seat;
    public:
    student(){}
    student(string n,int i,string s){
        name=n;
        id=new int(i);
        seat=s;
    }
    student(const student & p){
        this->name=p.name;
        this->seat=p.seat;
        int val=*(p.id);
        id=new int(val);
    }
    void set(int x){
        *id=x;
    }
    void show(){
        cout<<"id and seat type of "<<name<<" is "<<*id<<" and "<<seat<<endl;
    }
};

int main(){
    shared_ptr<student> p=make_shared<student>("anuj kumar",56,"free");
    p->show();
    shared_ptr<student> p1;
    p1=p;
    p1->show();
    p1->set(89);
    p1->show();
    return 0;
}