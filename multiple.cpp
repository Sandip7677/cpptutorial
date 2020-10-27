#include<iostream>
using namespace std;

int main()
{
    int m,i=1;
    cout<<"number which multiple you want to print:"<<endl;
    cin>>m;
    cout<<"multiple of "<<m<<" is:"<<endl;
    do
    {
        /* code */
        cout<<(m*i)<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}