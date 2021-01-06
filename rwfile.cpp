#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    string st;
    string st2;
    cout<<"write what you want to save in file"<<endl;
    getline(cin,st);
    cout<<"write what you want to save in file"<<endl;
    getline(cin,st2);
    ofstream out("file.txt");
    out<<st;
    out<<endl;
    out<<st2;
    out<<endl;
    out<<"whats up bro";
    out<<endl;
    string  st3;
    ifstream in("file.txt");
    getline(in,st3);
    cout<<st3<<endl;
    getline(in,st3);
    cout<<st3<<endl;
    out<<"it is end";
    out.close();
    out<<"it not ended it has just started";
    // ofstream out("file.txt");
    // out<<endl;
    // out<<"it is new time";
    return 0;
}