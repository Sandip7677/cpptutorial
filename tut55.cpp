#include<iostream>
using namespace std;

class base{
    public:
    int database;
    void data(){
        database;
        cout<<"value in database is:"<<database<<endl;
    }
};

class derived:public base{
    public:
    int dataderive;
    void data(){
        dataderive;
        cout<<"value in variable is:"<<dataderive<<endl;
    }
};
int main()
{
    base *b;
    derived d;
    b=&d;
    b->database=45;
    b->data();
    derived *f;
    f=&d;
    f->dataderive=459;
    f->data();
    return 0;
}