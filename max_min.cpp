#include<iostream>
using namespace std;

int max(int a,int b,int c);
int min(int a,int b,int c);

int main()
{
    int a,b,c;
    cout<<"input three integers "<<endl;
    cin>>a>>b>>c;
    cout<<"gratest amongest these three is "<<max(a,b,c)<<endl;
    cout<<"smallest amongest these three is "<<min(a,b,c)<<endl;
    return 0;
}
int max(int a,int b,int c)
{
    if (a>b)
    {
        if (c>a)
        {
            return c;            
        }
        else
        {
            return a;
        }
        
    }
    else
    {
        if (c>b)
        {
            return c;
        }
        else
        {
            return b;
        }
        
    }
    
}
int min(int a,int b,int c)
{
    if (a>b)
    {
       if (c>b)
        {
            return b;
        }
        else
        {
            return c;
        } 
    }
    else
    {
        if (c>a)
        {
            return a;
        }
        else
        {
            return c;
        }
        
    }
    
}