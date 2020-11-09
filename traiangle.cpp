#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"number of layers you want to print in your pyramide"<<endl;
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j<= n; j++)
        {
           if (j<=n-i)
           {
            cout<<"  ";
           }
           else
           {
               cout<<"* ";
           }
        // j<=n-i?" ":"*";
        }
        cout<<endl;
    }
    
    return 0;
}