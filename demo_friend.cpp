#include<iostream>
#include<cstring>
using namespace std;

class student{
    string name;
    int roll_no;
    int marks;
public:
    static int count;
    friend void secrte(student);
    void get_data();
};

int student :: count;

void secrte(student s){
    cout<<"marks obtained the student is"<<s.marks<<endl;
}

void student :: get_data(){
    cout<<"input name of student"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"input roll no and marks obtained by studnet"<<endl;
    cin>>roll_no>>marks;
    count++;
}

int main(){
    student animesh,rakesh,alpna;
    animesh.get_data();
    rakesh.get_data();
    alpna.get_data();
    cout<<"total no of student are:- "<<student::count<<endl;
    secrte(alpna);
    return 0;
}