#include<iostream>
using namespace std;

class base{
    int database;
    public:
    void data(int a){
        database=a;
        cout<<"value in database is:"<<database<<endl;
    }
};

class derived:public base{
    int dataderive;
    public:
    void data(int a){
        dataderive=a;
        cout<<"value in variable is:"<<dataderive<<endl;
    }
};
int main()
{
    base *b;
    derived d;
    b=&d;
    b->data(45);
    derived *f;
    f=&d;
    f->data(676);
    return 0;
}