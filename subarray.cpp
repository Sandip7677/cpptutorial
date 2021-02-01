#include<iostream>
using namespace std;

class subarr{
    int *arr;
    int size;
    public:
    subarr(int a){
        size=a;
        arr=new int[size];
        cout<<"input "<<size<<" values for array "<<endl;
        for (int i = 0; i <size; i++)
        {
            cin>>arr[i];
        }
    }
    void print(){
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j<size; j++)
            {
                for (int k = i;k <= j; k++)
                {
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
            
        }
        
    }
};
int main()
{
    subarr obj(5);
    cout<<endl;
    obj.print();
    return 0;
}