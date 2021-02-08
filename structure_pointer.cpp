#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll_number;
    string section;

    void set_data(){
        cout<<"input student name ,roll number and section  \n";
        cin>>name>>roll_number>>section;
    }
};

int main(){
    student std1;
    std1.set_data();
    cout<<std1.name<<" "<<std1.roll_number<<" "<<std1.section<<endl;
    return 0;
}