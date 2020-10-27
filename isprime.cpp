#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"input any integer"<<endl;
    cin>>num;
    int div=2;
    while (div<num)
    {
        /* code */
        if (num%div==0)
        {
            /* code */
            cout<<num<<" is not prime "<<endl;
            break;
        }
        else
        {
            div++;
        }
    }
    if (div==num)
    {
        /* code */
        cout<<num<<" is prime"<<endl;
    }
    
    return 0;
}