#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"write no of row and colunm you want to print"<<endl;
    cin>>row>>col;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row)
            {
                cout<<"* ";
            }
            else
            {
                if (j==1)
                {
                    cout<<"*";
                }
                else if (j==col)
                {
                    for (int s = 1; s <= (((2*col)-1)-j); s++)
                    {
                        cout<<" ";
                    }
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            if (j==col)
            {
                break;
            }
        }
        cout<<endl;
    }
    
    return 0;
}