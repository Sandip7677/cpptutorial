#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<i<<j<<endl;
            if(j==5)
            {
                break;
            }
        }
    }
    return 0;
}