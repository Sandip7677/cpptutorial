#include<iostream>
using namespace std;

int main()
{
    int till;
    cout<<"write number upto which you want to find prime number"<<endl;
    cin>>till;
    for (int num = 2; num <= till; num++)
    {
        /* code */
        int div=2;
        while (div<num)
        {
            /* code */
            if (num%div==0)
            {
                /* code */
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
            cout<<num<<endl;
        }
        
    }
    
    return 0;
}