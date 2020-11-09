#include<iostream>
using namespace std;
//wrong

int main()
{
    int row,col;
    cout<<"write no of row and colunm you want to print "<<endl;
    cin>>row>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i==1) || (i==row) || (j==1) || (j==col))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl; 
    }
    
    return 0;
}