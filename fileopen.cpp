#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
    ofstream out("file.txt");
    out<<"what !! \n";
    // out.close();
    // out.open("file.txt");
    out<<"new line";
    return 0;
}