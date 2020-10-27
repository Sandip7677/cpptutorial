#include<iostream>
using namespace std;

int main()
{
    int c=3;
    int *a=&c;
    int **b=&a;
    cout<<"the value of c:"<<*a<<endl;
    cout<<"the value of c:"<<**b<<endl;
    cout<<"address of c:"<<a<<endl;
    cout<<"adrss of a:"<<b<<endl;
    return 0;
}