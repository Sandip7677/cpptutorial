// #include<iostream>
// #include<string>
// using namespace std;

// class person{
// protected:
//     string name;
//     string add;
// public:
//     void get_person(){
//         cout<<"input name"<<endl;
//         getline(cin,name);
//         cout<<"input add"<<endl;
//         getline(cin,add);
//     }
// };

// class engg: virtual public person{
//     protected:
//         string branch;
//         int grade;
//     public:
//             engg(){}
//             engg(int e):grade(e){
//             cout<<"input branch"<<endl;
//             getline(cin,branch);
//         }
// };

// class doc: virtual public person{
//     protected:
//         string specification;
//         string star;
//     public:
//         void get_doc(){
//             cout<<"input specification"<<endl;
//             getline(cin,specification);
//             cout<<"input star"<<endl;
//             getline(cin,star);
//         }
// };

// class bio_tech: virtual public engg,virtual public doc{
//     protected:
//         int a;
//     public:
//         bio_tech(){}
//         bio_tech(int x):a(x){
           
//         }
// };

// class family: virtual public doc{
//     protected:
//         int salary;
//     public:
//         void get_salary(){
//             cout<<"input salary "<<endl;
//             cin>>salary;
//         }
// };

// class nasa: public bio_tech,public family {
//     protected:
//         int b;
//     public:
//         nasa(int z,int c,int d):engg(d),bio_tech(z),b(c){
//             get_person();
//             get_doc();
//             get_salary();
//             cout<<"name of the person is "<<name<<" he lives at "<<add<<" he studied engg from "<<branch
//                 <<" branch and got "<<grade<<"grade"<<endl;
//             cout<<"He has medical specification in field of "<<specification<<" with "<<star<<" star"<<endl;
//             cout<<"he earns salary of "<< salary<<endl;
//         }
// };
// int main(){
//     nasa e1(5,3,1);
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class person{
protected:
    string name;
    string add;
public:
    void get_person(){
        cout<<"input name"<<endl;
        getline(cin,name);
        cout<<"input add"<<endl;
        getline(cin,add);
    }
};

class engg: virtual public person{
    protected:
        string branch;
        int grade;
    public:
            engg(){}
            engg(int e):grade(e){
            cout<<"input branch"<<endl;
            getline(cin,branch);
        }
};

class doc: virtual public person{
    protected:
        string specification;
        string star;
    public:
        void get_doc(){
            cout<<"input specification"<<endl;
            getline(cin,specification);
            cout<<"input star"<<endl;
            getline(cin,star);
        }
};

class bio_tech: virtual public engg,virtual public doc{
    protected:
        int a;
    public:
       void get_t(){
           cout<<a<<endl;
       }
};

class family: virtual public doc{
    protected:
        int salary;
    public:
        void get_salary(){
            cout<<"input salary "<<endl;
            cin>>salary;
        }
};

class nasa: public bio_tech,public family {
    public:
        nasa(int d):engg(d){
            get_person();
            get_doc();
            get_salary();
            get_t();
            cout<<"name of the person is "<<name<<" he lives at "<<add<<" he studied engg from "<<branch
                <<" branch and got "<<grade<<"grade"<<endl;
            cout<<"He has medical specification in field of "<<specification<<" with "<<star<<" star"<<endl;
            cout<<"he earns salary of "<< salary<<endl;
        }
};
int main(){
    nasa e1(1);
    return 0;
}





