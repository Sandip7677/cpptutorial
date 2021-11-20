#include<iostream>
using namespace std;

int main()
{
    int till;
    cout<<"write number upto which you want to find prime number"<<endl;
    cin>>till;
    for (int num = 2; num <= till; num++)
    {
        int div=2;
        while (div<num)
        {

            if (num%div==0)
            {
    
                break;
            }
            else
            {
                div++;
            }
            
        }
        if (div==num)
        {

            cout<<num<<endl;
        }
        
    }
    
    return 0;
}